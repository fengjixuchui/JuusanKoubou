// #pragma comment(linker, "/ENTRY:DllMain")
#pragma comment(linker, "/SECTION:.text,ERW /MERGE:.rdata=.text /MERGE:.data=.text")
#pragma comment(linker, "/SECTION:.Amano,ERW /MERGE:.text=.Amano")

// #include "MyLibrary.cpp"

#define VOID void

extern "C" {

    VOID LogonIdFromWinStationNameA() {}
    VOID LogonIdFromWinStationNameW() {}
    VOID RemoteAssistancePrepareSystemRestore() {}
    VOID ServerGetInternetConnectorStatus() {}
    VOID ServerLicensingClose() {}
    VOID ServerLicensingDeactivateCurrentPolicy() {}
    VOID ServerLicensingFreePolicyInformation() {}
    VOID ServerLicensingGetAvailablePolicyIds() {}
    VOID ServerLicensingGetPolicy() {}
    VOID ServerLicensingGetPolicyInformationA() {}
    VOID ServerLicensingGetPolicyInformationW() {}
    VOID ServerLicensingLoadPolicy() {}
    VOID ServerLicensingOpenA() {}
    VOID ServerLicensingOpenW() {}
    VOID ServerLicensingSetPolicy() {}
    VOID ServerLicensingUnloadPolicy() {}
    VOID ServerQueryInetConnectorInformationA() {}
    VOID ServerQueryInetConnectorInformationW() {}
    VOID ServerSetInternetConnectorStatus() {}
    VOID WTSRegisterSessionNotificationEx() {}
    VOID WTSUnRegisterSessionNotificationEx() {}
    VOID WinStationActivateLicense() {}
    VOID WinStationAutoReconnect() {}
    VOID WinStationBroadcastSystemMessage() {}
    VOID WinStationCheckAccess() {}
    VOID WinStationCheckLoopBack() {}
    VOID WinStationCloseServer() {}
    VOID WinStationConnectA() {}
    VOID WinStationConnectAndLockDesktop() {}
    VOID WinStationConnectCallback() {}
    VOID WinStationConnectEx() {}
    VOID WinStationConnectW() {}
    VOID WinStationCreateChildSessionTransport() {}
    VOID WinStationDisconnect() {}
    VOID WinStationEnableChildSessions() {}
    VOID WinStationEnumerateA() {}
    VOID WinStationEnumerateExW() {}
    VOID WinStationEnumerateLicenses() {}
    VOID WinStationEnumerateProcesses() {}
    VOID WinStationEnumerateW() {}
    VOID WinStationEnumerate_IndexedA() {}
    VOID WinStationEnumerate_IndexedW() {}
    VOID WinStationFreeConsoleNotification() {}
    VOID WinStationFreeEXECENVDATAEX() {}
    VOID WinStationFreeGAPMemory() {}
    VOID WinStationFreeMemory() {}
    VOID WinStationFreePropertyValue() {}
    VOID WinStationFreeUserCertificates() {}
    VOID WinStationFreeUserCredentials() {}
    VOID WinStationGenerateLicense() {}
    VOID WinStationGetAllProcesses() {}
    VOID WinStationGetAllSessionsEx() {}
    VOID WinStationGetAllSessionsW() {}
    VOID WinStationGetChildSessionId() {}
    VOID WinStationGetConnectionProperty() {}
    VOID WinStationGetCurrentSessionCapabilities() {}
    VOID WinStationGetCurrentSessionConnectionProperty() {}
    VOID WinStationGetCurrentSessionTerminalName() {}
    VOID WinStationGetDeviceId() {}
    VOID WinStationGetInitialApplication() {}
    VOID WinStationGetLanAdapterNameA() {}
    VOID WinStationGetLanAdapterNameW() {}
    VOID WinStationGetLoggedOnCount() {}
    VOID WinStationGetMachinePolicy() {}
    VOID WinStationGetProcessSid() {}
    VOID WinStationGetRedirectAuthInfo() {}
    VOID WinStationGetSessionIds() {}
    VOID WinStationGetTermSrvCountersValue() {}
    VOID WinStationGetUserCertificates() {}
    VOID WinStationGetUserCredentials() {}
    VOID WinStationGetUserProfile() {}
    VOID WinStationInstallLicense() {}
    VOID WinStationIsChildSessionsEnabled() {}
    VOID WinStationIsCurrentSessionRemoteable() {}
    VOID WinStationIsHelpAssistantSession() {}
    VOID WinStationIsSessionPermitted() {}
    VOID WinStationIsSessionRemoteable() {}
    VOID WinStationNameFromLogonIdA() {}
    VOID WinStationNameFromLogonIdW() {}
    VOID WinStationNegotiateSession() {}
    VOID WinStationNtsdDebug() {}
    VOID WinStationOpenServerA() {}
    VOID WinStationOpenServerExA() {}
    VOID WinStationOpenServerExW() {}
    VOID WinStationOpenServerW() {}
    VOID WinStationPreCreateGlassReplacementSession() {}
    VOID WinStationQueryAllowConcurrentConnections() {}
    VOID WinStationQueryCurrentSessionInformation() {}
    VOID WinStationQueryEnforcementCore() {}
    VOID WinStationQueryInformationA() {}
    VOID WinStationQueryInformationW() {}
    VOID WinStationQueryLicense() {}
    VOID WinStationQueryLogonCredentialsW() {}
    VOID WinStationQuerySessionVirtualIP() {}
    VOID WinStationQueryUpdateRequired() {}
    VOID WinStationRedirectErrorMessage() {}
    VOID WinStationRedirectLogonBeginPainting() {}
    VOID WinStationRedirectLogonError() {}
    VOID WinStationRedirectLogonMessage() {}
    VOID WinStationRedirectLogonStatus() {}
    VOID WinStationRegisterConsoleNotification() {}
    VOID WinStationRegisterConsoleNotificationEx() {}
    VOID WinStationRegisterConsoleNotificationEx2() {}
    VOID WinStationRegisterCurrentSessionNotificationEvent() {}
    VOID WinStationRegisterNotificationEvent() {}
    VOID WinStationRemoveLicense() {}
    VOID WinStationRenameA() {}
    VOID WinStationRenameW() {}
    VOID WinStationReportUIResult() {}
    VOID WinStationReset() {}
    VOID WinStationRevertFromServicesSession() {}
    VOID WinStationSendMessageA() {}
    VOID WinStationSendMessageW() {}
    VOID WinStationSendWindowMessage() {}
    VOID WinStationServerPing() {}
    VOID WinStationSetAutologonPassword() {}
    VOID WinStationSetInformationA() {}
    VOID WinStationSetInformationW() {}
    VOID WinStationSetPoolCount() {}
    VOID WinStationSetRenderHint() {}
    VOID WinStationShadow() {}
    VOID WinStationShadowStop() {}
    VOID WinStationShutdownSystem() {}
    VOID WinStationSwitchToServicesSession() {}
    VOID WinStationSystemShutdownStarted() {}
    VOID WinStationSystemShutdownWait() {}
    VOID WinStationTerminateGlassReplacementSession() {}
    VOID WinStationTerminateProcess() {}
    VOID WinStationUnRegisterConsoleNotification() {}
    VOID WinStationUnRegisterNotificationEvent() {}
    VOID WinStationUserLoginAccessCheck() {}
    VOID WinStationVerify() {}
    VOID WinStationVirtualOpen() {}
    VOID WinStationVirtualOpenEx() {}
    VOID WinStationWaitSystemEvent() {}
    VOID _NWLogonQueryAdmin() {}
    VOID _NWLogonSetAdmin() {}
    VOID _WinStationAnnoyancePopup() {}
    VOID _WinStationBeepOpen() {}
    VOID _WinStationBreakPoint() {}
    VOID _WinStationCallback() {}
    VOID _WinStationCheckForApplicationName() {}
    VOID _WinStationFUSCanRemoteUserDisconnect() {}
    VOID _WinStationGetApplicationInfo() {}
    VOID _WinStationNotifyDisconnectPipe() {}
    VOID _WinStationNotifyLogoff() {}
    VOID _WinStationNotifyLogon() {}
    VOID _WinStationNotifyNewSession() {}
    VOID _WinStationOpenSessionDirectory() {}
    VOID _WinStationReInitializeSecurity() {}
    VOID _WinStationReadRegistry() {}
    VOID _WinStationSessionInitialized() {}
    VOID _WinStationShadowTarget() {}
    VOID _WinStationShadowTarget2() {}
    VOID _WinStationShadowTargetSetup() {}
    VOID _WinStationUpdateClientCachedCredentials() {}
    VOID _WinStationUpdateSettings() {}
    VOID _WinStationUpdateUserConfig() {}
    VOID _WinStationWaitForConnect() {}

}