//Write a program to Develop complete mini project using arrays, strings and functions

#include <stdio.h>

#define MAX_PATIENTS 100
#define MAX_DOCTORS 20
#define MAX_APPOINTMENTS 100
#define MAX_STR 100

struct Patient {
    int id;
    char name[MAX_STR];
    int age;
    char gender[10];
    char disease[MAX_STR];
    char room[10];
    int admitted;
};

struct Doctor {
    int id;
    char name[MAX_STR];
    char specialization[MAX_STR];
    int available;
};

struct Appointment {
    int id;
    int patientId;
    int doctorId;
    char date[MAX_STR];
    int status;
};

struct Patient patients[MAX_PATIENTS];
struct Doctor doctors[MAX_DOCTORS];
struct Appointment appointments[MAX_APPOINTMENTS];

int patientCount = 0;
int doctorCount = 0;
int appointmentCount = 0;
int nextPatientId = 1;
int nextDoctorId = 1;
int nextAppointmentId = 1;

void getString(char str[], int size) {
    int i = 0;
    char ch;
    
    while (i < size - 1) {
        ch = getchar();
        if (ch == '\n') {
            break;
        }
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
}

int containsString(char str[], char sub[]) {
    int i, j, found;
    
    for (i = 0; str[i] != '\0'; i++) {
        found = 1;
        for (j = 0; sub[j] != '\0'; j++) {
            if (str[i + j] == '\0' || str[i + j] != sub[j]) {
                found = 0;
                break;
            }
        }
        if (found == 1) {
            return 1;
        }
    }
    return 0;
}

void addPatient();
void displayPatients();
void searchPatient();
void admitPatient();
void dischargePatient();
void addDoctor();
void displayDoctors();
void bookAppointment();
void displayAppointments();
void cancelAppointment();
void patientReport();
void hospitalStats();

int main() {
    int choice;
    
    printf("\n============================================\n");
    printf("   HOSPITAL MANAGEMENT SYSTEM\n");
    printf("============================================\n");
    
    addDoctor();
    addDoctor();
    
    do {
        printf("\n============ MAIN MENU ============\n");
        printf("1. Patient Management\n");
        printf("2. Doctor Management\n");
        printf("3. Appointment Management\n");
        printf("4. Reports & Statistics\n");
        printf("5. Exit\n");
        printf("===================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        
        switch(choice) {
            case 1: {
                int subChoice;
                printf("\n----- PATIENT MANAGEMENT -----\n");
                printf("1. Add Patient\n");
                printf("2. View All Patients\n");
                printf("3. Search Patient\n");
                printf("4. Admit Patient\n");
                printf("5. Discharge Patient\n");
                printf("Enter choice: ");
                scanf("%d", &subChoice);
                getchar();
                
                switch(subChoice) {
                    case 1: addPatient(); break;
                    case 2: displayPatients(); break;
                    case 3: searchPatient(); break;
                    case 4: admitPatient(); break;
                    case 5: dischargePatient(); break;
                    default: printf("\nInvalid choice!\n");
                }
                break;
            }
            case 2: {
                int subChoice;
                printf("\n----- DOCTOR MANAGEMENT -----\n");
                printf("1. Add Doctor\n");
                printf("2. View All Doctors\n");
                printf("Enter choice: ");
                scanf("%d", &subChoice);
                getchar();
                
                switch(subChoice) {
                    case 1: addDoctor(); break;
                    case 2: displayDoctors(); break;
                    default: printf("\nInvalid choice!\n");
                }
                break;
            }
            case 3: {
                int subChoice;
                printf("\n----- APPOINTMENT MANAGEMENT -----\n");
                printf("1. Book Appointment\n");
                printf("2. View All Appointments\n");
                printf("3. Cancel Appointment\n");
                printf("Enter choice: ");
                scanf("%d", &subChoice);
                getchar();
                
                switch(subChoice) {
                    case 1: bookAppointment(); break;
                    case 2: displayAppointments(); break;
                    case 3: cancelAppointment(); break;
                    default: printf("\nInvalid choice!\n");
                }
                break;
            }
            case 4: {
                int subChoice;
                printf("\n----- REPORTS & STATISTICS -----\n");
                printf("1. Patient Report\n");
                printf("2. Hospital Statistics\n");
                printf("Enter choice: ");
                scanf("%d", &subChoice);
                getchar();
                
                switch(subChoice) {
                    case 1: patientReport(); break;
                    case 2: hospitalStats(); break;
                    default: printf("\nInvalid choice!\n");
                }
                break;
            }
            case 5: printf("\nThank you for using Hospital Management System!\n"); break;
            default: printf("\nInvalid choice!\n");
        }
    } while(choice != 5);
    
    return 0;
}

void addPatient() {
    if (patientCount >= MAX_PATIENTS) {
        printf("\nHospital is full! Cannot admit more patients.\n");
        return;
    }
    
    printf("\n--- ADD NEW PATIENT ---\n");
    
    patients[patientCount].id = nextPatientId++;
    
    printf("Enter patient name: ");
    getString(patients[patientCount].name, MAX_STR);
    
    printf("Enter age: ");
    scanf("%d", &patients[patientCount].age);
    getchar();
    
    printf("Enter gender (Male/Female): ");
    getString(patients[patientCount].gender, 10);
    
    printf("Enter disease: ");
    getString(patients[patientCount].disease, MAX_STR);
    
    patients[patientCount].admitted = 0;
    
    patientCount++;
    printf("\nPatient added successfully! Patient ID: %d\n", patients[patientCount-1].id);
}

void displayPatients() {
    int i;
    
    if (patientCount == 0) {
        printf("\nNo patients registered!\n");
        return;
    }
    
    printf("\n============= PATIENT LIST =============\n");
    printf("ID\tName\t\tAge\tGender\tDisease\t\tStatus\n");
    printf("--------------------------------------------------------\n");
    
    for (i = 0; i < patientCount; i++) {
        printf("%d\t%-15s\t%d\t%-6s\t%-12s\t", 
               patients[i].id,
               patients[i].name,
               patients[i].age,
               patients[i].gender,
               patients[i].disease);
        if (patients[i].admitted == 1) {
            printf("Admitted (Room: %s)\n", patients[i].room);
        } else {
            printf("OPD\n");
        }
    }
}

void searchPatient() {
    char search[MAX_STR];
    int i, found = 0;
    
    printf("\n--- SEARCH PATIENT ---\n");
    printf("Enter patient name to search: ");
    getString(search, MAX_STR);
    
    printf("\n============= SEARCH RESULTS =============\n");
    
    for (i = 0; i < patientCount; i++) {
        if (containsString(patients[i].name, search) == 1) {
            printf("ID: %d\n", patients[i].id);
            printf("Name: %s\n", patients[i].name);
            printf("Age: %d\n", patients[i].age);
            printf("Gender: %s\n", patients[i].gender);
            printf("Disease: %s\n", patients[i].disease);
            if (patients[i].admitted == 1) {
                printf("Status: Admitted (Room: %s)\n", patients[i].room);
            } else {
                printf("Status: OPD\n");
            }
            printf("----------------------------------------\n");
            found = 1;
        }
    }
    
    if (found == 0) {
        printf("No patient found with name '%s'\n", search);
    }
}

void admitPatient() {
    int id, i, found = 0;
    
    printf("\n--- ADMIT PATIENT ---\n");
    printf("Enter Patient ID: ");
    scanf("%d", &id);
    
    for (i = 0; i < patientCount; i++) {
        if (patients[i].id == id) {
            found = 1;
            break;
        }
    }
    
    if (found == 0) {
        printf("\nPatient ID %d not found!\n", id);
        return;
    }
    
    if (patients[i].admitted == 1) {
        printf("\nPatient is already admitted!\n");
        return;
    }
    
    printf("Enter room number: ");
    getchar();
    getString(patients[i].room, 10);
    
    patients[i].admitted = 1;
    printf("\nPatient admitted successfully in Room %s!\n", patients[i].room);
}

void dischargePatient() {
    int id, i, found = 0;
    
    printf("\n--- DISCHARGE PATIENT ---\n");
    printf("Enter Patient ID: ");
    scanf("%d", &id);
    
    for (i = 0; i < patientCount; i++) {
        if (patients[i].id == id) {
            found = 1;
            break;
        }
    }
    
    if (found == 0) {
        printf("\nPatient ID %d not found!\n", id);
        return;
    }
    
    if (patients[i].admitted == 0) {
        printf("\nPatient is not admitted!\n");
        return;
    }
    
    printf("\nPatient Details:\n");
    printf("Name: %s\n", patients[i].name);
    printf("Room: %s\n", patients[i].room);
    printf("Confirm discharge? (1 for Yes, 0 for No): ");
    int confirm;
    scanf("%d", &confirm);
    
    if (confirm == 1) {
        patients[i].admitted = 0;
        printf("\nPatient discharged successfully!\n");
    } else {
        printf("\nDischarge cancelled!\n");
    }
}

void addDoctor() {
    if (doctorCount >= MAX_DOCTORS) {
        printf("\nCannot add more doctors!\n");
        return;
    }
    
    printf("\n--- ADD NEW DOCTOR ---\n");
    
    doctors[doctorCount].id = nextDoctorId++;
    
    printf("Enter doctor name: ");
    getString(doctors[doctorCount].name, MAX_STR);
    
    printf("Enter specialization: ");
    getString(doctors[doctorCount].specialization, MAX_STR);
    
    doctors[doctorCount].available = 1;
    
    doctorCount++;
    printf("\nDoctor added successfully! Doctor ID: %d\n", doctors[doctorCount-1].id);
}

void displayDoctors() {
    int i;
    
    if (doctorCount == 0) {
        printf("\nNo doctors available!\n");
        return;
    }
    
    printf("\n============= DOCTOR LIST =============\n");
    printf("ID\tName\t\tSpecialization\t\tStatus\n");
    printf("--------------------------------------------------------\n");
    
    for (i = 0; i < doctorCount; i++) {
        printf("%d\t%-15s\t%-20s\t", 
               doctors[i].id,
               doctors[i].name,
               doctors[i].specialization);
        if (doctors[i].available == 1) {
            printf("Available\n");
        } else {
            printf("Busy\n");
        }
    }
}

void bookAppointment() {
    if (appointmentCount >= MAX_APPOINTMENTS) {
        printf("\nAppointment list is full!\n");
        return;
    }
    
    int patientId, doctorId;
    int i, patientFound = 0, doctorFound = 0;
    
    printf("\n--- BOOK APPOINTMENT ---\n");
    
    printf("Enter Patient ID: ");
    scanf("%d", &patientId);
    
    for (i = 0; i < patientCount; i++) {
        if (patients[i].id == patientId) {
            patientFound = 1;
            break;
        }
    }
    
    if (patientFound == 0) {
        printf("\nPatient ID %d not found!\n", patientId);
        return;
    }
    
    printf("Enter Doctor ID: ");
    scanf("%d", &doctorId);
    getchar();
    
    for (i = 0; i < doctorCount; i++) {
        if (doctors[i].id == doctorId) {
            doctorFound = 1;
            break;
        }
    }
    
    if (doctorFound == 0) {
        printf("\nDoctor ID %d not found!\n", doctorId);
        return;
    }
    
    if (doctors[i].available == 0) {
        printf("\nDoctor is currently busy!\n");
        return;
    }
    
    appointments[appointmentCount].id = nextAppointmentId++;
    appointments[appointmentCount].patientId = patientId;
    appointments[appointmentCount].doctorId = doctorId;
    
    printf("Enter appointment date (DD/MM/YYYY): ");
    getString(appointments[appointmentCount].date, MAX_STR);
    
    appointments[appointmentCount].status = 1;
    
    doctors[i].available = 0;
    
    appointmentCount++;
    printf("\nAppointment booked successfully! Appointment ID: %d\n", 
           appointments[appointmentCount-1].id);
}

void displayAppointments() {
    int i;
    
    if (appointmentCount == 0) {
        printf("\nNo appointments booked!\n");
        return;
    }
    
    printf("\n============= APPOINTMENT LIST =============\n");
    printf("ID\tPatient\t\tDoctor\t\tDate\t\tStatus\n");
    printf("--------------------------------------------------------\n");
    
    for (i = 0; i < appointmentCount; i++) {
        int pId = appointments[i].patientId;
        int dId = appointments[i].doctorId;
        char pName[MAX_STR], dName[MAX_STR];
        
        for (int j = 0; j < patientCount; j++) {
            if (patients[j].id == pId) {
                copyString(pName, patients[j].name);
                break;
            }
        }
        
        for (int j = 0; j < doctorCount; j++) {
            if (doctors[j].id == dId) {
                copyString(dName, doctors[j].name);
                break;
            }
        }
        
        printf("%d\t%-15s\t%-15s\t%-12s\t", 
               appointments[i].id,
               pName,
               dName,
               appointments[i].date);
        if (appointments[i].status == 1) {
            printf("Scheduled\n");
        } else {
            printf("Cancelled\n");
        }
    }
}

void cancelAppointment() {
    int id, i, found = 0;
    
    printf("\n--- CANCEL APPOINTMENT ---\n");
    printf("Enter Appointment ID: ");
    scanf("%d", &id);
    
    for (i = 0; i < appointmentCount; i++) {
        if (appointments[i].id == id) {
            found = 1;
            break;
        }
    }
    
    if (found == 0) {
        printf("\nAppointment ID %d not found!\n", id);
        return;
    }
    
    if (appointments[i].status == 0) {
        printf("\nAppointment is already cancelled!\n");
        return;
    }
    
    appointments[i].status = 0;
    
    for (int j = 0; j < doctorCount; j++) {
        if (doctors[j].id == appointments[i].doctorId) {
            doctors[j].available = 1;
            break;
        }
    }
    
    printf("\nAppointment cancelled successfully!\n");
}

void patientReport() {
    int id, i, found = 0;
    
    printf("\n--- PATIENT REPORT ---\n");
    printf("Enter Patient ID: ");
    scanf("%d", &id);
    
    for (i = 0; i < patientCount; i++) {
        if (patients[i].id == id) {
            found = 1;
            break;
        }
    }
    
    if (found == 0) {
        printf("\nPatient ID %d not found!\n", id);
        return;
    }
    
    printf("\n============= PATIENT REPORT =============\n");
    printf("Patient ID: %d\n", patients[i].id);
    printf("Name: %s\n", patients[i].name);
    printf("Age: %d\n", patients[i].age);
    printf("Gender: %s\n", patients[i].gender);
    printf("Disease: %s\n", patients[i].disease);
    
    if (patients[i].admitted == 1) {
        printf("Status: Admitted\n");
        printf("Room: %s\n", patients[i].room);
    } else {
        printf("Status: OPD\n");
    }
    
    printf("\n--- Appointment History ---\n");
    int hasAppointment = 0;
    for (int j = 0; j < appointmentCount; j++) {
        if (appointments[j].patientId == id && appointments[j].status == 1) {
            printf("Appointment ID: %d | Date: %s\n", 
                   appointments[j].id, appointments[j].date);
            hasAppointment = 1;
        }
    }
    
    if (hasAppointment == 0) {
        printf("No active appointments\n");
    }
}

void hospitalStats() {
    int admitted = 0, opd = 0, availableDoctors = 0, scheduledAppointments = 0;
    
    for (int i = 0; i < patientCount; i++) {
        if (patients[i].admitted == 1) {
            admitted++;
        } else {
            opd++;
        }
    }
    
    for (int i = 0; i < doctorCount; i++) {
        if (doctors[i].available == 1) {
            availableDoctors++;
        }
    }
    
    for (int i = 0; i < appointmentCount; i++) {
        if (appointments[i].status == 1) {
            scheduledAppointments++;
        }
    }
    
    printf("\n============= HOSPITAL STATISTICS =============\n");
    printf("Total Patients: %d\n", patientCount);
    printf("  - Admitted: %d\n", admitted);
    printf("  - OPD: %d\n", opd);
    printf("\nTotal Doctors: %d\n", doctorCount);
    printf("  - Available: %d\n", availableDoctors);
    printf("  - Busy: %d\n", doctorCount - availableDoctors);
    printf("\nTotal Appointments: %d\n", appointmentCount);
    printf("  - Scheduled: %d\n", scheduledAppointments);
    printf("  - Cancelled: %d\n", appointmentCount - scheduledAppointments);
    printf("\nHospital Capacity: %d/%d beds occupied\n", admitted, MAX_PATIENTS);
}

void copyString(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}