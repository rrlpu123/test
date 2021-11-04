#ifdef __cplusplus
extern "C" {
#endif
	__declspec(dllexport) BYTE HsIDCis_DeviceOpen(HWND APPHwnd);
	__declspec(dllexport) BOOL HsIDCis_FirmwareUpdate(char *pFileName);
	__declspec(dllexport) BOOL HsIDCis_DeviceClose();
	__declspec(dllexport) BYTE HsIDCis_GetUsbSpeed();
	__declspec(dllexport) BYTE HsIDCis_GetFirmwareVersion();
	__declspec(dllexport) BYTE HsIDCis_GetFpgaVersion();
	__declspec(dllexport) WORD HsIDCis_GetSerial();
	__declspec(dllexport) BOOL HsIDCis_SetSerial(WORD wSerial);
	__declspec(dllexport) BOOL HsIDCis_MotorGo(BOOL bDir, BYTE nSpeed);
	__declspec(dllexport) BOOL HsIDCis_MotorStop();
	__declspec(dllexport) BOOL HsIDCis_SetAdcSetting(BYTE nRGain, BYTE nGGain, BYTE nBGain, BYTE nROffset, BYTE nGOffset, BYTE nBOffset, BYTE ch);
	__declspec(dllexport) BOOL HsIDCis_GetAdcSetting(BYTE* pRGain, BYTE* pGGain, BYTE* pBGain, BYTE* pROffset, BYTE* pGOffset, BYTE* pBOffset, BYTE ch);
	__declspec(dllexport) BOOL HsIDCis_SetLEDLength(WORD wRLEDLen, WORD wGLEDLen, WORD wBLEDLen, BYTE ch);
	__declspec(dllexport) BOOL HsIDCis_GetLEDLength(WORD* pRLEDLen, WORD* pGLEDLen, WORD* pBLEDLen, BYTE ch);
	__declspec(dllexport) BYTE HsIDCis_GetDpi();
	__declspec(dllexport) BOOL HsIDCis_SetDpi(BYTE nDpi);
	__declspec(dllexport) BYTE HsIDCis_IDScan(char *pImageFileName, BOOL bValid);
	__declspec(dllexport) BYTE HsIDCis_IDScanBuffer_4C(char *pImageBuffer, BITMAPINFO * pBitmapInfo, char* pIRImageBuffer, BITMAPINFO* pIRBitmapInfo, RGBQUAD* rgb)
	__declspec(dllexport) BYTE HsIDCis_IDScanDouble(char *pImageFileName, BOOL bhorizontal);
	__declspec(dllexport) BYTE HsIDCis_IDScanNoCalibration(char *pImageFileName, BOOL bhorizontal);
	__declspec(dllexport) BYTE HsIDCis_GetBits();
	__declspec(dllexport) BOOL HsIDCis_SetBits(BYTE nBits);
	__declspec(dllexport) BOOL HsIDCis_SetDropColor(BYTE nColor);
	__declspec(dllexport) BYTE HsIDCis_GetDropColor();
	__declspec(dllexport) BOOL HsIDCis_FpgaReset();
	__declspec(dllexport) BYTE HsIDCis_GetSensorValue();
	__declspec(dllexport) BOOL HsIDCis_SetScanTimeout(WORD wTime);
	__declspec(dllexport) WORD HsIDCis_GetScanTimeout();
	__declspec(dllexport) BOOL HsIDCis_SetImageSetting(BYTE nSetting);
	__declspec(dllexport) BYTE HsIDCis_GetImageSetting();
	__declspec(dllexport) BYTE HsIDCis_GetThreshold();
	__declspec(dllexport) BOOL HsIDCis_SetThreshold(BYTE nThreshold);
	__declspec(dllexport) BOOL HsIDCis_MotorGo(BOOL bDir, BYTE nSpeed);
	__declspec(dllexport) BOOL HsIDCis_MotorStop();
	__declspec(dllexport) BOOL HsIDCis_IDCardVerify();
	__declspec(dllexport) int HsIDCis_IDCardType();
	__declspec(dllexport) int HsIDCis_IDCardDir();



#ifdef __cplusplus
}
#endif