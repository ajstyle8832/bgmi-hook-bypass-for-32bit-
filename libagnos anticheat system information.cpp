// Function names suggest this is an anti-cheat or integrity checking system

// Initialization and loading functions
extern "C" JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved);
void AnoSDKInit();

// Event callbacks
void AnoSDKOnPause();
void AnoSDKOnResume();
void AnoSDKOnRecvData(void* data);
void AnoSDKOnRecvSignature(const char* signature);

// Data reporting and management
void AnoSDKGetReportData(int type, void* buffer, int bufferSize);
void AnoSDKDelReportData(int type);
void AnoSDKRegistInfoListener(void* listener);

// User information management
void AnoSDKSetUserInfo(const char* userInfo);
void AnoSDKSetUserInfoWithLicense(const char* userInfo, const char* license);

// SDK control functions
void AnoSDKIoctl(int request, void* data);
void AnoSDKIoctlOld(int request, void* data);

// Exported functions
void AnoSDKForExport(void* data);

