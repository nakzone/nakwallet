

#pragma once

#ifndef GO_MOC_2f72f8_H
#define GO_MOC_2f72f8_H

#include <stdint.h>

#ifdef __cplusplus
class QmlBridge2f72f8;
void QmlBridge2f72f8_QmlBridge2f72f8_QRegisterMetaTypes();
extern "C" {
#endif

struct Moc_PackedString { char* data; long long len; };
struct Moc_PackedList { void* data; long long len; };
void QmlBridge2f72f8_ConnectDisplayTotalBalance(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplayTotalBalance(void* ptr);
void QmlBridge2f72f8_DisplayTotalBalance(void* ptr, struct Moc_PackedString balance, struct Moc_PackedString balanceUSD);
void QmlBridge2f72f8_ConnectDisplayAvailableBalance(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplayAvailableBalance(void* ptr);
void QmlBridge2f72f8_DisplayAvailableBalance(void* ptr, struct Moc_PackedString data);
void QmlBridge2f72f8_ConnectDisplayLockedBalance(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplayLockedBalance(void* ptr);
void QmlBridge2f72f8_DisplayLockedBalance(void* ptr, struct Moc_PackedString data);
void QmlBridge2f72f8_ConnectDisplayAddress(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplayAddress(void* ptr);
void QmlBridge2f72f8_DisplayAddress(void* ptr, struct Moc_PackedString address, struct Moc_PackedString wallet, char displayFiatConversion);
void QmlBridge2f72f8_ConnectAddTransactionToList(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectAddTransactionToList(void* ptr);
void QmlBridge2f72f8_AddTransactionToList(void* ptr, struct Moc_PackedString paymentID, struct Moc_PackedString transactionID, struct Moc_PackedString amount, struct Moc_PackedString confirmations, struct Moc_PackedString ti, struct Moc_PackedString number);
void QmlBridge2f72f8_ConnectAddRemoteNodeToList(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectAddRemoteNodeToList(void* ptr);
void QmlBridge2f72f8_AddRemoteNodeToList(void* ptr, struct Moc_PackedString nodeName);
void QmlBridge2f72f8_ConnectChangeTextRemoteNode(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectChangeTextRemoteNode(void* ptr);
void QmlBridge2f72f8_ChangeTextRemoteNode(void* ptr, int index, struct Moc_PackedString newText);
void QmlBridge2f72f8_ConnectSetSelectedRemoteNode(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectSetSelectedRemoteNode(void* ptr);
void QmlBridge2f72f8_SetSelectedRemoteNode(void* ptr, int index);
void QmlBridge2f72f8_ConnectDisplayPopup(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplayPopup(void* ptr);
void QmlBridge2f72f8_DisplayPopup(void* ptr, struct Moc_PackedString text, int ti);
void QmlBridge2f72f8_ConnectDisplaySyncingInfo(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplaySyncingInfo(void* ptr);
void QmlBridge2f72f8_DisplaySyncingInfo(void* ptr, struct Moc_PackedString syncing, struct Moc_PackedString syncingInfo);
void QmlBridge2f72f8_ConnectDisplayErrorDialog(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplayErrorDialog(void* ptr);
void QmlBridge2f72f8_DisplayErrorDialog(void* ptr, struct Moc_PackedString errorText, struct Moc_PackedString errorInformativeText);
void QmlBridge2f72f8_ConnectDisplayInfoDialog(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplayInfoDialog(void* ptr);
void QmlBridge2f72f8_DisplayInfoDialog(void* ptr, struct Moc_PackedString title, struct Moc_PackedString mainText, struct Moc_PackedString informativeText);
void QmlBridge2f72f8_ConnectClearTransferAmount(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectClearTransferAmount(void* ptr);
void QmlBridge2f72f8_ClearTransferAmount(void* ptr);
void QmlBridge2f72f8_ConnectAskForFusion(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectAskForFusion(void* ptr);
void QmlBridge2f72f8_AskForFusion(void* ptr);
void QmlBridge2f72f8_ConnectClearListTransactions(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectClearListTransactions(void* ptr);
void QmlBridge2f72f8_ClearListTransactions(void* ptr);
void QmlBridge2f72f8_ConnectDisplayPrivateKeys(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplayPrivateKeys(void* ptr);
void QmlBridge2f72f8_DisplayPrivateKeys(void* ptr, struct Moc_PackedString filename, struct Moc_PackedString privateViewKey, struct Moc_PackedString privateSpendKey, struct Moc_PackedString walletAddress);
void QmlBridge2f72f8_ConnectDisplaySeed(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplaySeed(void* ptr);
void QmlBridge2f72f8_DisplaySeed(void* ptr, struct Moc_PackedString filename, struct Moc_PackedString mnemonicSeed, struct Moc_PackedString walletAddress);
void QmlBridge2f72f8_ConnectDisplayOpenWalletScreen(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplayOpenWalletScreen(void* ptr);
void QmlBridge2f72f8_DisplayOpenWalletScreen(void* ptr);
void QmlBridge2f72f8_ConnectDisplayMainWalletScreen(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplayMainWalletScreen(void* ptr);
void QmlBridge2f72f8_DisplayMainWalletScreen(void* ptr);
void QmlBridge2f72f8_ConnectFinishedLoadingWalletd(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectFinishedLoadingWalletd(void* ptr);
void QmlBridge2f72f8_FinishedLoadingWalletd(void* ptr);
void QmlBridge2f72f8_ConnectFinishedCreatingWallet(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectFinishedCreatingWallet(void* ptr);
void QmlBridge2f72f8_FinishedCreatingWallet(void* ptr);
void QmlBridge2f72f8_ConnectFinishedSendingTransaction(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectFinishedSendingTransaction(void* ptr);
void QmlBridge2f72f8_FinishedSendingTransaction(void* ptr);
void QmlBridge2f72f8_ConnectDisplayPathToPreviousWallet(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplayPathToPreviousWallet(void* ptr);
void QmlBridge2f72f8_DisplayPathToPreviousWallet(void* ptr, struct Moc_PackedString pathToPreviousWallet);
void QmlBridge2f72f8_ConnectDisplayWalletCreationLocation(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplayWalletCreationLocation(void* ptr);
void QmlBridge2f72f8_DisplayWalletCreationLocation(void* ptr, struct Moc_PackedString walletLocation);
void QmlBridge2f72f8_ConnectDisplayUseRemoteNode(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplayUseRemoteNode(void* ptr);
void QmlBridge2f72f8_DisplayUseRemoteNode(void* ptr, char useRemote);
void QmlBridge2f72f8_ConnectHideSettingsScreen(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectHideSettingsScreen(void* ptr);
void QmlBridge2f72f8_HideSettingsScreen(void* ptr);
void QmlBridge2f72f8_ConnectDisplaySettingsScreen(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplaySettingsScreen(void* ptr);
void QmlBridge2f72f8_DisplaySettingsScreen(void* ptr);
void QmlBridge2f72f8_ConnectDisplaySettingsValues(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplaySettingsValues(void* ptr);
void QmlBridge2f72f8_DisplaySettingsValues(void* ptr, char displayFiat);
void QmlBridge2f72f8_ConnectDisplaySettingsRemoteDaemonInfo(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplaySettingsRemoteDaemonInfo(void* ptr);
void QmlBridge2f72f8_DisplaySettingsRemoteDaemonInfo(void* ptr, struct Moc_PackedString remoteNodeAddress, struct Moc_PackedString remoteNodePort);
void QmlBridge2f72f8_ConnectDisplayFullBalanceInTransferAmount(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplayFullBalanceInTransferAmount(void* ptr);
void QmlBridge2f72f8_DisplayFullBalanceInTransferAmount(void* ptr, struct Moc_PackedString fullBalance);
void QmlBridge2f72f8_ConnectDisplayDefaultFee(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplayDefaultFee(void* ptr);
void QmlBridge2f72f8_DisplayDefaultFee(void* ptr, struct Moc_PackedString fee);
void QmlBridge2f72f8_ConnectDisplayNodeFee(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplayNodeFee(void* ptr);
void QmlBridge2f72f8_DisplayNodeFee(void* ptr, struct Moc_PackedString nodeFee);
void QmlBridge2f72f8_ConnectUpdateConfirmationsOfTransaction(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectUpdateConfirmationsOfTransaction(void* ptr);
void QmlBridge2f72f8_UpdateConfirmationsOfTransaction(void* ptr, int index, struct Moc_PackedString confirmations);
void QmlBridge2f72f8_ConnectDisplayInfoScreen(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectDisplayInfoScreen(void* ptr);
void QmlBridge2f72f8_DisplayInfoScreen(void* ptr);
void QmlBridge2f72f8_ConnectAddSavedAddressToList(void* ptr, long long t);
void QmlBridge2f72f8_DisconnectAddSavedAddressToList(void* ptr);
void QmlBridge2f72f8_AddSavedAddressToList(void* ptr, int dbID, struct Moc_PackedString name, struct Moc_PackedString address, struct Moc_PackedString paymentID);
void QmlBridge2f72f8_Log(void* ptr, struct Moc_PackedString msg);
void QmlBridge2f72f8_ClickedButtonExplorer(void* ptr, struct Moc_PackedString transactionID);
void QmlBridge2f72f8_GoToWebsite(void* ptr, struct Moc_PackedString url);
void QmlBridge2f72f8_ClickedButtonCopyTx(void* ptr, struct Moc_PackedString transactionID);
void QmlBridge2f72f8_ClickedButtonCopyAddress(void* ptr);
void QmlBridge2f72f8_ClickedButtonCopyKeys(void* ptr);
void QmlBridge2f72f8_ClickedButtonCopy(void* ptr, struct Moc_PackedString stringToCopy);
void QmlBridge2f72f8_ClickedButtonSend(void* ptr, struct Moc_PackedString transferAddress, struct Moc_PackedString transferAmount, struct Moc_PackedString transferPaymentID, struct Moc_PackedString transferFee);
void QmlBridge2f72f8_ClickedButtonBackupWallet(void* ptr);
void QmlBridge2f72f8_ClickedCloseWallet(void* ptr);
void QmlBridge2f72f8_ClickedButtonOpen(void* ptr, struct Moc_PackedString pathToWallet, struct Moc_PackedString passwordWallet);
void QmlBridge2f72f8_ClickedButtonCreate(void* ptr, struct Moc_PackedString filenameWallet, struct Moc_PackedString passwordWallet, struct Moc_PackedString confirmPasswordWallet);
void QmlBridge2f72f8_ClickedButtonImport(void* ptr, struct Moc_PackedString filenameWallet, struct Moc_PackedString passwordWallet, struct Moc_PackedString privateViewKey, struct Moc_PackedString privateSpendKey, struct Moc_PackedString mnemonicSeed, struct Moc_PackedString confirmPasswordWallet, struct Moc_PackedString scanHeight);
void QmlBridge2f72f8_ChoseRemote(void* ptr, char remote);
void QmlBridge2f72f8_SelectedRemoteNode(void* ptr, int index);
struct Moc_PackedString QmlBridge2f72f8_GetTransferAmountUSD(void* ptr, struct Moc_PackedString amountTRTL);
void QmlBridge2f72f8_ClickedCloseSettings(void* ptr);
void QmlBridge2f72f8_ClickedSettingsButton(void* ptr);
void QmlBridge2f72f8_ChoseDisplayFiat(void* ptr, char displayFiat);
void QmlBridge2f72f8_ChoseCheckpoints(void* ptr, char checkpoints);
void QmlBridge2f72f8_SaveRemoteDaemonInfo(void* ptr, struct Moc_PackedString daemonAddress, struct Moc_PackedString daemonPort);
void QmlBridge2f72f8_ResetRemoteDaemonInfo(void* ptr);
void QmlBridge2f72f8_GetFullBalanceAndDisplayInTransferAmount(void* ptr, struct Moc_PackedString transferFee);
void QmlBridge2f72f8_GetDefaultFeeAndDisplay(void* ptr);
void QmlBridge2f72f8_LimitDisplayTransactions(void* ptr, char limit);
struct Moc_PackedString QmlBridge2f72f8_GetVersion(void* ptr);
struct Moc_PackedString QmlBridge2f72f8_GetNewVersion(void* ptr);
struct Moc_PackedString QmlBridge2f72f8_GetNewVersionURL(void* ptr);
void QmlBridge2f72f8_OptimizeWalletWithFusion(void* ptr);
void QmlBridge2f72f8_SaveAddress(void* ptr, struct Moc_PackedString name, struct Moc_PackedString address, struct Moc_PackedString paymentID);
void QmlBridge2f72f8_FillListSavedAddresses(void* ptr);
void QmlBridge2f72f8_DeleteSavedAddress(void* ptr, int dbID);
void QmlBridge2f72f8_ExportListTransactions(void* ptr);
void QmlBridge2f72f8_RegisterToGo(void* ptr, void* object);
void QmlBridge2f72f8_DeregisterToGo(void* ptr, struct Moc_PackedString objectName);
int QmlBridge2f72f8_QmlBridge2f72f8_QRegisterMetaType();
int QmlBridge2f72f8_QmlBridge2f72f8_QRegisterMetaType2(char* typeName);
int QmlBridge2f72f8_QmlBridge2f72f8_QmlRegisterType();
int QmlBridge2f72f8_QmlBridge2f72f8_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName);
void* QmlBridge2f72f8___children_atList(void* ptr, int i);
void QmlBridge2f72f8___children_setList(void* ptr, void* i);
void* QmlBridge2f72f8___children_newList(void* ptr);
void* QmlBridge2f72f8___dynamicPropertyNames_atList(void* ptr, int i);
void QmlBridge2f72f8___dynamicPropertyNames_setList(void* ptr, void* i);
void* QmlBridge2f72f8___dynamicPropertyNames_newList(void* ptr);
void* QmlBridge2f72f8___findChildren_atList(void* ptr, int i);
void QmlBridge2f72f8___findChildren_setList(void* ptr, void* i);
void* QmlBridge2f72f8___findChildren_newList(void* ptr);
void* QmlBridge2f72f8___findChildren_atList3(void* ptr, int i);
void QmlBridge2f72f8___findChildren_setList3(void* ptr, void* i);
void* QmlBridge2f72f8___findChildren_newList3(void* ptr);
void* QmlBridge2f72f8___qFindChildren_atList2(void* ptr, int i);
void QmlBridge2f72f8___qFindChildren_setList2(void* ptr, void* i);
void* QmlBridge2f72f8___qFindChildren_newList2(void* ptr);
void* QmlBridge2f72f8_NewQmlBridge(void* parent);
void QmlBridge2f72f8_DestroyQmlBridge(void* ptr);
void QmlBridge2f72f8_DestroyQmlBridgeDefault(void* ptr);
void QmlBridge2f72f8_ChildEventDefault(void* ptr, void* event);
void QmlBridge2f72f8_ConnectNotifyDefault(void* ptr, void* sign);
void QmlBridge2f72f8_CustomEventDefault(void* ptr, void* event);
void QmlBridge2f72f8_DeleteLaterDefault(void* ptr);
void QmlBridge2f72f8_DisconnectNotifyDefault(void* ptr, void* sign);
char QmlBridge2f72f8_EventDefault(void* ptr, void* e);
char QmlBridge2f72f8_EventFilterDefault(void* ptr, void* watched, void* event);
;
void QmlBridge2f72f8_TimerEventDefault(void* ptr, void* event);

#ifdef __cplusplus
}
#endif

#endif