#include "hackloader.h"

FARPROC AddIPAddress;
FARPROC AllocateAndGetInterfaceInfoFromStack;
FARPROC AllocateAndGetIpAddrTableFromStack;
FARPROC CancelIPChangeNotify;
FARPROC CancelIfTimestampConfigChange;
FARPROC CancelMibChangeNotify2;
FARPROC CaptureInterfaceHardwareCrossTimestamp;
FARPROC CloseCompartment;
FARPROC CloseGetIPPhysicalInterfaceForDestination;
FARPROC ConvertCompartmentGuidToId;
FARPROC ConvertCompartmentIdToGuid;
FARPROC ConvertGuidToStringA;
FARPROC ConvertGuidToStringW;
FARPROC ConvertInterfaceAliasToLuid;
FARPROC ConvertInterfaceGuidToLuid;
FARPROC ConvertInterfaceIndexToLuid;
FARPROC ConvertInterfaceLuidToAlias;
FARPROC ConvertInterfaceLuidToGuid;
FARPROC ConvertInterfaceLuidToIndex;
FARPROC ConvertInterfaceLuidToNameA;
FARPROC ConvertInterfaceLuidToNameW;
FARPROC ConvertInterfaceNameToLuidA;
FARPROC ConvertInterfaceNameToLuidW;
FARPROC ConvertInterfacePhysicalAddressToLuid;
FARPROC ConvertIpv4MaskToLength;
FARPROC ConvertLengthToIpv4Mask;
FARPROC ConvertRemoteInterfaceAliasToLuid;
FARPROC ConvertRemoteInterfaceGuidToLuid;
FARPROC ConvertRemoteInterfaceIndexToLuid;
FARPROC ConvertRemoteInterfaceLuidToAlias;
FARPROC ConvertRemoteInterfaceLuidToGuid;
FARPROC ConvertRemoteInterfaceLuidToIndex;
FARPROC ConvertStringToGuidA;
FARPROC ConvertStringToGuidW;
FARPROC ConvertStringToInterfacePhysicalAddress;
FARPROC CreateAnycastIpAddressEntry;
FARPROC CreateCompartment;
FARPROC CreateIpForwardEntry;
FARPROC CreateIpForwardEntry2;
FARPROC CreateIpNetEntry;
FARPROC CreateIpNetEntry2;
FARPROC CreatePersistentTcpPortReservation;
FARPROC CreatePersistentUdpPortReservation;
FARPROC CreateProxyArpEntry;
FARPROC CreateSortedAddressPairs;
FARPROC CreateUnicastIpAddressEntry;
FARPROC DeleteAnycastIpAddressEntry;
FARPROC DeleteCompartment;
FARPROC DeleteIPAddress;
FARPROC DeleteIpForwardEntry;
FARPROC DeleteIpForwardEntry2;
FARPROC DeleteIpNetEntry;
FARPROC DeleteIpNetEntry2;
FARPROC DeletePersistentTcpPortReservation;
FARPROC DeletePersistentUdpPortReservation;
FARPROC DeleteProxyArpEntry;
FARPROC DeleteUnicastIpAddressEntry;
FARPROC DisableMediaSense;
FARPROC EnableRouter;
FARPROC FlushIpNetTable;
FARPROC FlushIpNetTable2;
FARPROC FlushIpPathTable;
FARPROC FreeDnsSettings;
FARPROC FreeInterfaceDnsSettings;
FARPROC FreeMibTable;
FARPROC GetAdapterIndex;
FARPROC GetAdapterOrderMap;
FARPROC GetAdaptersAddresses;
FARPROC GetAdaptersInfo;
FARPROC GetAnycastIpAddressEntry;
FARPROC GetAnycastIpAddressTable;
FARPROC GetBestInterface;
FARPROC GetBestInterfaceEx;
FARPROC GetBestRoute;
FARPROC GetBestRoute2;
FARPROC GetCurrentThreadCompartmentId;
FARPROC GetCurrentThreadCompartmentScope;
FARPROC GetDefaultCompartmentId;
FARPROC GetDnsSettings;
FARPROC GetExtendedTcpTable;
FARPROC GetExtendedUdpTable;
FARPROC GetFriendlyIfIndex;
FARPROC GetIcmpStatistics;
FARPROC GetIcmpStatisticsEx;
FARPROC GetIfEntry;
FARPROC GetIfEntry2;
FARPROC GetIfEntry2Ex;
FARPROC GetIfStackTable;
FARPROC GetIfTable;
FARPROC GetIfTable2;
FARPROC GetIfTable2Ex;
FARPROC GetInterfaceCompartmentId;
FARPROC GetInterfaceCurrentTimestampCapabilities;
FARPROC GetInterfaceDnsSettings;
FARPROC GetInterfaceHardwareTimestampCapabilities;
FARPROC GetInterfaceInfo;
FARPROC GetInvertedIfStackTable;
FARPROC GetIpAddrTable;
FARPROC GetIpErrorString;
FARPROC GetIpForwardEntry2;
FARPROC GetIpForwardTable;
FARPROC GetIpForwardTable2;
FARPROC GetIpInterfaceEntry;
FARPROC GetIpInterfaceTable;
FARPROC GetIpNetEntry2;
FARPROC GetIpNetTable;
FARPROC GetIpNetTable2;
FARPROC GetIpNetworkConnectionBandwidthEstimates;
FARPROC GetIpPathEntry;
FARPROC GetIpPathTable;
FARPROC GetIpStatistics;
FARPROC GetIpStatisticsEx;
FARPROC GetJobCompartmentId;
FARPROC GetMulticastIpAddressEntry;
FARPROC GetMulticastIpAddressTable;
FARPROC GetNetworkConnectivityHint;
FARPROC GetNetworkConnectivityHintForInterface;
FARPROC GetNetworkInformation;
FARPROC GetNetworkParams;
FARPROC GetNumberOfInterfaces;
FARPROC GetOwnerModuleFromPidAndInfo;
FARPROC GetOwnerModuleFromTcp6Entry;
FARPROC GetOwnerModuleFromTcpEntry;
FARPROC GetOwnerModuleFromUdp6Entry;
FARPROC GetOwnerModuleFromUdpEntry;
FARPROC GetPerAdapterInfo;
FARPROC GetPerTcp6ConnectionEStats;
FARPROC GetPerTcp6ConnectionStats;
FARPROC GetPerTcpConnectionEStats;
FARPROC GetPerTcpConnectionStats;
FARPROC GetRTTAndHopCount;
FARPROC GetSessionCompartmentId;
FARPROC GetTcp6Table;
FARPROC GetTcp6Table2;
FARPROC GetTcpStatistics;
FARPROC GetTcpStatisticsEx;
FARPROC GetTcpStatisticsEx2;
FARPROC GetTcpTable;
FARPROC GetTcpTable2;
FARPROC GetTeredoPort;
FARPROC GetUdp6Table;
FARPROC GetUdpStatistics;
FARPROC GetUdpStatisticsEx;
FARPROC GetUdpStatisticsEx2;
FARPROC GetUdpTable;
FARPROC GetUniDirectionalAdapterInfo;
FARPROC GetUnicastIpAddressEntry;
FARPROC GetUnicastIpAddressTable;
FARPROC GetWPAOACSupportLevel;
FARPROC Icmp6CreateFile;
FARPROC Icmp6ParseReplies;
FARPROC Icmp6SendEcho2;
FARPROC IcmpCloseHandle;
FARPROC IcmpCreateFile;
FARPROC IcmpParseReplies;
FARPROC IcmpSendEcho;
FARPROC IcmpSendEcho2;
FARPROC IcmpSendEcho2Ex;
FARPROC InitializeCompartmentEntry;
FARPROC InitializeIpForwardEntry;
FARPROC InitializeIpInterfaceEntry;
FARPROC InitializeUnicastIpAddressEntry;
FARPROC InternalCleanupPersistentStore;
FARPROC InternalCreateAnycastIpAddressEntry;
FARPROC InternalCreateIpForwardEntry;
FARPROC InternalCreateIpForwardEntry2;
FARPROC InternalCreateIpNetEntry;
FARPROC InternalCreateIpNetEntry2;
FARPROC InternalCreateOrRefIpForwardEntry2;
FARPROC InternalCreateUnicastIpAddressEntry;
FARPROC InternalDeleteAnycastIpAddressEntry;
FARPROC InternalDeleteIpForwardEntry;
FARPROC InternalDeleteIpForwardEntry2;
FARPROC InternalDeleteIpNetEntry;
FARPROC InternalDeleteIpNetEntry2;
FARPROC InternalDeleteUnicastIpAddressEntry;
FARPROC InternalFindInterfaceByAddress;
FARPROC InternalGetAnycastIpAddressEntry;
FARPROC InternalGetAnycastIpAddressTable;
FARPROC InternalGetBoundTcp6EndpointTable;
FARPROC InternalGetBoundTcpEndpointTable;
FARPROC InternalGetForwardIpTable2;
FARPROC InternalGetIPPhysicalInterfaceForDestination;
FARPROC InternalGetIfEntry2;
FARPROC InternalGetIfTable;
FARPROC InternalGetIfTable2;
FARPROC InternalGetIpAddrTable;
FARPROC InternalGetIpForwardEntry2;
FARPROC InternalGetIpForwardTable;
FARPROC InternalGetIpInterfaceEntry;
FARPROC InternalGetIpInterfaceTable;
FARPROC InternalGetIpNetEntry2;
FARPROC InternalGetIpNetTable;
FARPROC InternalGetIpNetTable2;
FARPROC InternalGetMulticastIpAddressEntry;
FARPROC InternalGetMulticastIpAddressTable;
FARPROC InternalGetRtcSlotInformation;
FARPROC InternalGetTcp6Table2;
FARPROC InternalGetTcp6TableWithOwnerModule;
FARPROC InternalGetTcp6TableWithOwnerPid;
FARPROC InternalGetTcpTable;
FARPROC InternalGetTcpTable2;
FARPROC InternalGetTcpTableEx;
FARPROC InternalGetTcpTableWithOwnerModule;
FARPROC InternalGetTcpTableWithOwnerPid;
FARPROC InternalGetTunnelPhysicalAdapter;
FARPROC InternalGetUdp6TableWithOwnerModule;
FARPROC InternalGetUdp6TableWithOwnerPid;
FARPROC InternalGetUdpTable;
FARPROC InternalGetUdpTableEx;
FARPROC InternalGetUdpTableWithOwnerModule;
FARPROC InternalGetUdpTableWithOwnerPid;
FARPROC InternalGetUnicastIpAddressEntry;
FARPROC InternalGetUnicastIpAddressTable;
FARPROC InternalIcmpCreateFileEx;
FARPROC InternalSetIfEntry;
FARPROC InternalSetIpForwardEntry;
FARPROC InternalSetIpForwardEntry2;
FARPROC InternalSetIpInterfaceEntry;
FARPROC InternalSetIpNetEntry;
FARPROC InternalSetIpNetEntry2;
FARPROC InternalSetIpStats;
FARPROC InternalSetTcpEntry;
FARPROC InternalSetTeredoPort;
FARPROC InternalSetUnicastIpAddressEntry;
FARPROC IpReleaseAddress;
FARPROC IpRenewAddress;
FARPROC LookupPersistentTcpPortReservation;
FARPROC LookupPersistentUdpPortReservation;
FARPROC NTPTimeToNTFileTime;
FARPROC NTTimeToNTPTime;
FARPROC NhGetGuidFromInterfaceName;
FARPROC NhGetInterfaceDescriptionFromGuid;
FARPROC NhGetInterfaceNameFromDeviceGuid;
FARPROC NhGetInterfaceNameFromGuid;
FARPROC NhpAllocateAndGetInterfaceInfoFromStack;
FARPROC NotifyAddrChange;
FARPROC NotifyCompartmentChange;
FARPROC NotifyIfTimestampConfigChange;
FARPROC NotifyIpInterfaceChange;
FARPROC NotifyNetworkConnectivityHintChange;
FARPROC NotifyRouteChange;
FARPROC NotifyRouteChange2;
FARPROC NotifyStableUnicastIpAddressTable;
FARPROC NotifyTeredoPortChange;
FARPROC NotifyUnicastIpAddressChange;
FARPROC OpenCompartment;
FARPROC ParseNetworkString;
FARPROC PfAddFiltersToInterface;
FARPROC PfAddGlobalFilterToInterface;
FARPROC PfBindInterfaceToIPAddress;
FARPROC PfBindInterfaceToIndex;
FARPROC PfCreateInterface;
FARPROC PfDeleteInterface;
FARPROC PfDeleteLog;
FARPROC PfGetInterfaceStatistics;
FARPROC PfMakeLog;
FARPROC PfRebindFilters;
FARPROC PfRemoveFilterHandles;
FARPROC PfRemoveFiltersFromInterface;
FARPROC PfRemoveGlobalFilterFromInterface;
FARPROC PfSetLogBuffer;
FARPROC PfTestPacket;
FARPROC PfUnBindInterface;
FARPROC ResolveIpNetEntry2;
FARPROC ResolveNeighbor;
FARPROC RestoreMediaSense;
FARPROC SendARP;
FARPROC SetAdapterIpAddress;
FARPROC SetCurrentThreadCompartmentId;
FARPROC SetCurrentThreadCompartmentScope;
FARPROC SetDnsSettings;
FARPROC SetIfEntry;
FARPROC SetInterfaceDnsSettings;
FARPROC SetIpForwardEntry;
FARPROC SetIpForwardEntry2;
FARPROC SetIpInterfaceEntry;
FARPROC SetIpNetEntry;
FARPROC SetIpNetEntry2;
FARPROC SetIpStatistics;
FARPROC SetIpStatisticsEx;
FARPROC SetIpTTL;
FARPROC SetJobCompartmentId;
FARPROC SetNetworkInformation;
FARPROC SetPerTcp6ConnectionEStats;
FARPROC SetPerTcp6ConnectionStats;
FARPROC SetPerTcpConnectionEStats;
FARPROC SetPerTcpConnectionStats;
FARPROC SetSessionCompartmentId;
FARPROC SetTcpEntry;
FARPROC SetUnicastIpAddressEntry;
FARPROC UnenableRouter;
FARPROC do_echo_rep;
FARPROC do_echo_req;
FARPROC if_indextoname;
FARPROC if_nametoindex;
FARPROC register_icmp;

__declspec(naked) void _AddIPAddress() { jmp(AddIPAddress); }
__declspec(naked) void _AllocateAndGetInterfaceInfoFromStack() { jmp(AllocateAndGetInterfaceInfoFromStack); }
__declspec(naked) void _AllocateAndGetIpAddrTableFromStack() { jmp(AllocateAndGetIpAddrTableFromStack); }
__declspec(naked) void _CancelIPChangeNotify() { jmp(CancelIPChangeNotify); }
__declspec(naked) void _CancelIfTimestampConfigChange() { jmp(CancelIfTimestampConfigChange); }
__declspec(naked) void _CancelMibChangeNotify2() { jmp(CancelMibChangeNotify2); }
__declspec(naked) void _CaptureInterfaceHardwareCrossTimestamp() { jmp(CaptureInterfaceHardwareCrossTimestamp); }
__declspec(naked) void _CloseCompartment() { jmp(CloseCompartment); }
__declspec(naked) void _CloseGetIPPhysicalInterfaceForDestination() { jmp(CloseGetIPPhysicalInterfaceForDestination); }
__declspec(naked) void _ConvertCompartmentGuidToId() { jmp(ConvertCompartmentGuidToId); }
__declspec(naked) void _ConvertCompartmentIdToGuid() { jmp(ConvertCompartmentIdToGuid); }
__declspec(naked) void _ConvertGuidToStringA() { jmp(ConvertGuidToStringA); }
__declspec(naked) void _ConvertGuidToStringW() { jmp(ConvertGuidToStringW); }
__declspec(naked) void _ConvertInterfaceAliasToLuid() { jmp(ConvertInterfaceAliasToLuid); }
__declspec(naked) void _ConvertInterfaceGuidToLuid() { jmp(ConvertInterfaceGuidToLuid); }
__declspec(naked) void _ConvertInterfaceIndexToLuid() { jmp(ConvertInterfaceIndexToLuid); }
__declspec(naked) void _ConvertInterfaceLuidToAlias() { jmp(ConvertInterfaceLuidToAlias); }
__declspec(naked) void _ConvertInterfaceLuidToGuid() { jmp(ConvertInterfaceLuidToGuid); }
__declspec(naked) void _ConvertInterfaceLuidToIndex() { jmp(ConvertInterfaceLuidToIndex); }
__declspec(naked) void _ConvertInterfaceLuidToNameA() { jmp(ConvertInterfaceLuidToNameA); }
__declspec(naked) void _ConvertInterfaceLuidToNameW() { jmp(ConvertInterfaceLuidToNameW); }
__declspec(naked) void _ConvertInterfaceNameToLuidA() { jmp(ConvertInterfaceNameToLuidA); }
__declspec(naked) void _ConvertInterfaceNameToLuidW() { jmp(ConvertInterfaceNameToLuidW); }
__declspec(naked) void _ConvertInterfacePhysicalAddressToLuid() { jmp(ConvertInterfacePhysicalAddressToLuid); }
__declspec(naked) void _ConvertIpv4MaskToLength() { jmp(ConvertIpv4MaskToLength); }
__declspec(naked) void _ConvertLengthToIpv4Mask() { jmp(ConvertLengthToIpv4Mask); }
__declspec(naked) void _ConvertRemoteInterfaceAliasToLuid() { jmp(ConvertRemoteInterfaceAliasToLuid); }
__declspec(naked) void _ConvertRemoteInterfaceGuidToLuid() { jmp(ConvertRemoteInterfaceGuidToLuid); }
__declspec(naked) void _ConvertRemoteInterfaceIndexToLuid() { jmp(ConvertRemoteInterfaceIndexToLuid); }
__declspec(naked) void _ConvertRemoteInterfaceLuidToAlias() { jmp(ConvertRemoteInterfaceLuidToAlias); }
__declspec(naked) void _ConvertRemoteInterfaceLuidToGuid() { jmp(ConvertRemoteInterfaceLuidToGuid); }
__declspec(naked) void _ConvertRemoteInterfaceLuidToIndex() { jmp(ConvertRemoteInterfaceLuidToIndex); }
__declspec(naked) void _ConvertStringToGuidA() { jmp(ConvertStringToGuidA); }
__declspec(naked) void _ConvertStringToGuidW() { jmp(ConvertStringToGuidW); }
__declspec(naked) void _ConvertStringToInterfacePhysicalAddress() { jmp(ConvertStringToInterfacePhysicalAddress); }
__declspec(naked) void _CreateAnycastIpAddressEntry() { jmp(CreateAnycastIpAddressEntry); }
__declspec(naked) void _CreateCompartment() { jmp(CreateCompartment); }
__declspec(naked) void _CreateIpForwardEntry() { jmp(CreateIpForwardEntry); }
__declspec(naked) void _CreateIpForwardEntry2() { jmp(CreateIpForwardEntry2); }
__declspec(naked) void _CreateIpNetEntry() { jmp(CreateIpNetEntry); }
__declspec(naked) void _CreateIpNetEntry2() { jmp(CreateIpNetEntry2); }
__declspec(naked) void _CreatePersistentTcpPortReservation() { jmp(CreatePersistentTcpPortReservation); }
__declspec(naked) void _CreatePersistentUdpPortReservation() { jmp(CreatePersistentUdpPortReservation); }
__declspec(naked) void _CreateProxyArpEntry() { jmp(CreateProxyArpEntry); }
__declspec(naked) void _CreateSortedAddressPairs() { jmp(CreateSortedAddressPairs); }
__declspec(naked) void _CreateUnicastIpAddressEntry() { jmp(CreateUnicastIpAddressEntry); }
__declspec(naked) void _DeleteAnycastIpAddressEntry() { jmp(DeleteAnycastIpAddressEntry); }
__declspec(naked) void _DeleteCompartment() { jmp(DeleteCompartment); }
__declspec(naked) void _DeleteIPAddress() { jmp(DeleteIPAddress); }
__declspec(naked) void _DeleteIpForwardEntry() { jmp(DeleteIpForwardEntry); }
__declspec(naked) void _DeleteIpForwardEntry2() { jmp(DeleteIpForwardEntry2); }
__declspec(naked) void _DeleteIpNetEntry() { jmp(DeleteIpNetEntry); }
__declspec(naked) void _DeleteIpNetEntry2() { jmp(DeleteIpNetEntry2); }
__declspec(naked) void _DeletePersistentTcpPortReservation() { jmp(DeletePersistentTcpPortReservation); }
__declspec(naked) void _DeletePersistentUdpPortReservation() { jmp(DeletePersistentUdpPortReservation); }
__declspec(naked) void _DeleteProxyArpEntry() { jmp(DeleteProxyArpEntry); }
__declspec(naked) void _DeleteUnicastIpAddressEntry() { jmp(DeleteUnicastIpAddressEntry); }
__declspec(naked) void _DisableMediaSense() { jmp(DisableMediaSense); }
__declspec(naked) void _EnableRouter() { jmp(EnableRouter); }
__declspec(naked) void _FlushIpNetTable() { jmp(FlushIpNetTable); }
__declspec(naked) void _FlushIpNetTable2() { jmp(FlushIpNetTable2); }
__declspec(naked) void _FlushIpPathTable() { jmp(FlushIpPathTable); }
__declspec(naked) void _FreeDnsSettings() { jmp(FreeDnsSettings); }
__declspec(naked) void _FreeInterfaceDnsSettings() { jmp(FreeInterfaceDnsSettings); }
__declspec(naked) void _FreeMibTable() { jmp(FreeMibTable); }
__declspec(naked) void _GetAdapterIndex() { jmp(GetAdapterIndex); }
__declspec(naked) void _GetAdapterOrderMap() { jmp(GetAdapterOrderMap); }
__declspec(naked) void _GetAdaptersAddresses() { jmp(GetAdaptersAddresses); }
__declspec(naked) void _GetAdaptersInfo() { jmp(GetAdaptersInfo); }
__declspec(naked) void _GetAnycastIpAddressEntry() { jmp(GetAnycastIpAddressEntry); }
__declspec(naked) void _GetAnycastIpAddressTable() { jmp(GetAnycastIpAddressTable); }
__declspec(naked) void _GetBestInterface() { jmp(GetBestInterface); }
__declspec(naked) void _GetBestInterfaceEx() { jmp(GetBestInterfaceEx); }
__declspec(naked) void _GetBestRoute() { jmp(GetBestRoute); }
__declspec(naked) void _GetBestRoute2() { jmp(GetBestRoute2); }
__declspec(naked) void _GetCurrentThreadCompartmentId() { jmp(GetCurrentThreadCompartmentId); }
__declspec(naked) void _GetCurrentThreadCompartmentScope() { jmp(GetCurrentThreadCompartmentScope); }
__declspec(naked) void _GetDefaultCompartmentId() { jmp(GetDefaultCompartmentId); }
__declspec(naked) void _GetDnsSettings() { jmp(GetDnsSettings); }
__declspec(naked) void _GetExtendedTcpTable() { jmp(GetExtendedTcpTable); }
__declspec(naked) void _GetExtendedUdpTable() { jmp(GetExtendedUdpTable); }
__declspec(naked) void _GetFriendlyIfIndex() { jmp(GetFriendlyIfIndex); }
__declspec(naked) void _GetIcmpStatistics() { jmp(GetIcmpStatistics); }
__declspec(naked) void _GetIcmpStatisticsEx() { jmp(GetIcmpStatisticsEx); }
__declspec(naked) void _GetIfEntry() { jmp(GetIfEntry); }
__declspec(naked) void _GetIfEntry2() { jmp(GetIfEntry2); }
__declspec(naked) void _GetIfEntry2Ex() { jmp(GetIfEntry2Ex); }
__declspec(naked) void _GetIfStackTable() { jmp(GetIfStackTable); }
__declspec(naked) void _GetIfTable() { jmp(GetIfTable); }
__declspec(naked) void _GetIfTable2() { jmp(GetIfTable2); }
__declspec(naked) void _GetIfTable2Ex() { jmp(GetIfTable2Ex); }
__declspec(naked) void _GetInterfaceCompartmentId() { jmp(GetInterfaceCompartmentId); }
__declspec(naked) void _GetInterfaceCurrentTimestampCapabilities() { jmp(GetInterfaceCurrentTimestampCapabilities); }
__declspec(naked) void _GetInterfaceDnsSettings() { jmp(GetInterfaceDnsSettings); }
__declspec(naked) void _GetInterfaceHardwareTimestampCapabilities() { jmp(GetInterfaceHardwareTimestampCapabilities); }
__declspec(naked) void _GetInterfaceInfo() { jmp(GetInterfaceInfo); }
__declspec(naked) void _GetInvertedIfStackTable() { jmp(GetInvertedIfStackTable); }
__declspec(naked) void _GetIpAddrTable() { jmp(GetIpAddrTable); }
__declspec(naked) void _GetIpErrorString() { jmp(GetIpErrorString); }
__declspec(naked) void _GetIpForwardEntry2() { jmp(GetIpForwardEntry2); }
__declspec(naked) void _GetIpForwardTable() { jmp(GetIpForwardTable); }
__declspec(naked) void _GetIpForwardTable2() { jmp(GetIpForwardTable2); }
__declspec(naked) void _GetIpInterfaceEntry() { jmp(GetIpInterfaceEntry); }
__declspec(naked) void _GetIpInterfaceTable() { jmp(GetIpInterfaceTable); }
__declspec(naked) void _GetIpNetEntry2() { jmp(GetIpNetEntry2); }
__declspec(naked) void _GetIpNetTable() { jmp(GetIpNetTable); }
__declspec(naked) void _GetIpNetTable2() { jmp(GetIpNetTable2); }
__declspec(naked) void _GetIpNetworkConnectionBandwidthEstimates() { jmp(GetIpNetworkConnectionBandwidthEstimates); }
__declspec(naked) void _GetIpPathEntry() { jmp(GetIpPathEntry); }
__declspec(naked) void _GetIpPathTable() { jmp(GetIpPathTable); }
__declspec(naked) void _GetIpStatistics() { jmp(GetIpStatistics); }
__declspec(naked) void _GetIpStatisticsEx() { jmp(GetIpStatisticsEx); }
__declspec(naked) void _GetJobCompartmentId() { jmp(GetJobCompartmentId); }
__declspec(naked) void _GetMulticastIpAddressEntry() { jmp(GetMulticastIpAddressEntry); }
__declspec(naked) void _GetMulticastIpAddressTable() { jmp(GetMulticastIpAddressTable); }
__declspec(naked) void _GetNetworkConnectivityHint() { jmp(GetNetworkConnectivityHint); }
__declspec(naked) void _GetNetworkConnectivityHintForInterface() { jmp(GetNetworkConnectivityHintForInterface); }
__declspec(naked) void _GetNetworkInformation() { jmp(GetNetworkInformation); }
__declspec(naked) void _GetNetworkParams() { jmp(GetNetworkParams); }
__declspec(naked) void _GetNumberOfInterfaces() { jmp(GetNumberOfInterfaces); }
__declspec(naked) void _GetOwnerModuleFromPidAndInfo() { jmp(GetOwnerModuleFromPidAndInfo); }
__declspec(naked) void _GetOwnerModuleFromTcp6Entry() { jmp(GetOwnerModuleFromTcp6Entry); }
__declspec(naked) void _GetOwnerModuleFromTcpEntry() { jmp(GetOwnerModuleFromTcpEntry); }
__declspec(naked) void _GetOwnerModuleFromUdp6Entry() { jmp(GetOwnerModuleFromUdp6Entry); }
__declspec(naked) void _GetOwnerModuleFromUdpEntry() { jmp(GetOwnerModuleFromUdpEntry); }
__declspec(naked) void _GetPerAdapterInfo() { jmp(GetPerAdapterInfo); }
__declspec(naked) void _GetPerTcp6ConnectionEStats() { jmp(GetPerTcp6ConnectionEStats); }
__declspec(naked) void _GetPerTcp6ConnectionStats() { jmp(GetPerTcp6ConnectionStats); }
__declspec(naked) void _GetPerTcpConnectionEStats() { jmp(GetPerTcpConnectionEStats); }
__declspec(naked) void _GetPerTcpConnectionStats() { jmp(GetPerTcpConnectionStats); }
__declspec(naked) void _GetRTTAndHopCount() { jmp(GetRTTAndHopCount); }
__declspec(naked) void _GetSessionCompartmentId() { jmp(GetSessionCompartmentId); }
__declspec(naked) void _GetTcp6Table() { jmp(GetTcp6Table); }
__declspec(naked) void _GetTcp6Table2() { jmp(GetTcp6Table2); }
__declspec(naked) void _GetTcpStatistics() { jmp(GetTcpStatistics); }
__declspec(naked) void _GetTcpStatisticsEx() { jmp(GetTcpStatisticsEx); }
__declspec(naked) void _GetTcpStatisticsEx2() { jmp(GetTcpStatisticsEx2); }
__declspec(naked) void _GetTcpTable() { jmp(GetTcpTable); }
__declspec(naked) void _GetTcpTable2() { jmp(GetTcpTable2); }
__declspec(naked) void _GetTeredoPort() { jmp(GetTeredoPort); }
__declspec(naked) void _GetUdp6Table() { jmp(GetUdp6Table); }
__declspec(naked) void _GetUdpStatistics() { jmp(GetUdpStatistics); }
__declspec(naked) void _GetUdpStatisticsEx() { jmp(GetUdpStatisticsEx); }
__declspec(naked) void _GetUdpStatisticsEx2() { jmp(GetUdpStatisticsEx2); }
__declspec(naked) void _GetUdpTable() { jmp(GetUdpTable); }
__declspec(naked) void _GetUniDirectionalAdapterInfo() { jmp(GetUniDirectionalAdapterInfo); }
__declspec(naked) void _GetUnicastIpAddressEntry() { jmp(GetUnicastIpAddressEntry); }
__declspec(naked) void _GetUnicastIpAddressTable() { jmp(GetUnicastIpAddressTable); }
__declspec(naked) void _GetWPAOACSupportLevel() { jmp(GetWPAOACSupportLevel); }
__declspec(naked) void _Icmp6CreateFile() { jmp(Icmp6CreateFile); }
__declspec(naked) void _Icmp6ParseReplies() { jmp(Icmp6ParseReplies); }
__declspec(naked) void _Icmp6SendEcho2() { jmp(Icmp6SendEcho2); }
__declspec(naked) void _IcmpCloseHandle() { jmp(IcmpCloseHandle); }
__declspec(naked) void _IcmpCreateFile() { jmp(IcmpCreateFile); }
__declspec(naked) void _IcmpParseReplies() { jmp(IcmpParseReplies); }
__declspec(naked) void _IcmpSendEcho() { jmp(IcmpSendEcho); }
__declspec(naked) void _IcmpSendEcho2() { jmp(IcmpSendEcho2); }
__declspec(naked) void _IcmpSendEcho2Ex() { jmp(IcmpSendEcho2Ex); }
__declspec(naked) void _InitializeCompartmentEntry() { jmp(InitializeCompartmentEntry); }
__declspec(naked) void _InitializeIpForwardEntry() { jmp(InitializeIpForwardEntry); }
__declspec(naked) void _InitializeIpInterfaceEntry() { jmp(InitializeIpInterfaceEntry); }
__declspec(naked) void _InitializeUnicastIpAddressEntry() { jmp(InitializeUnicastIpAddressEntry); }
__declspec(naked) void _InternalCleanupPersistentStore() { jmp(InternalCleanupPersistentStore); }
__declspec(naked) void _InternalCreateAnycastIpAddressEntry() { jmp(InternalCreateAnycastIpAddressEntry); }
__declspec(naked) void _InternalCreateIpForwardEntry() { jmp(InternalCreateIpForwardEntry); }
__declspec(naked) void _InternalCreateIpForwardEntry2() { jmp(InternalCreateIpForwardEntry2); }
__declspec(naked) void _InternalCreateIpNetEntry() { jmp(InternalCreateIpNetEntry); }
__declspec(naked) void _InternalCreateIpNetEntry2() { jmp(InternalCreateIpNetEntry2); }
__declspec(naked) void _InternalCreateOrRefIpForwardEntry2() { jmp(InternalCreateOrRefIpForwardEntry2); }
__declspec(naked) void _InternalCreateUnicastIpAddressEntry() { jmp(InternalCreateUnicastIpAddressEntry); }
__declspec(naked) void _InternalDeleteAnycastIpAddressEntry() { jmp(InternalDeleteAnycastIpAddressEntry); }
__declspec(naked) void _InternalDeleteIpForwardEntry() { jmp(InternalDeleteIpForwardEntry); }
__declspec(naked) void _InternalDeleteIpForwardEntry2() { jmp(InternalDeleteIpForwardEntry2); }
__declspec(naked) void _InternalDeleteIpNetEntry() { jmp(InternalDeleteIpNetEntry); }
__declspec(naked) void _InternalDeleteIpNetEntry2() { jmp(InternalDeleteIpNetEntry2); }
__declspec(naked) void _InternalDeleteUnicastIpAddressEntry() { jmp(InternalDeleteUnicastIpAddressEntry); }
__declspec(naked) void _InternalFindInterfaceByAddress() { jmp(InternalFindInterfaceByAddress); }
__declspec(naked) void _InternalGetAnycastIpAddressEntry() { jmp(InternalGetAnycastIpAddressEntry); }
__declspec(naked) void _InternalGetAnycastIpAddressTable() { jmp(InternalGetAnycastIpAddressTable); }
__declspec(naked) void _InternalGetBoundTcp6EndpointTable() { jmp(InternalGetBoundTcp6EndpointTable); }
__declspec(naked) void _InternalGetBoundTcpEndpointTable() { jmp(InternalGetBoundTcpEndpointTable); }
__declspec(naked) void _InternalGetForwardIpTable2() { jmp(InternalGetForwardIpTable2); }
__declspec(naked) void _InternalGetIPPhysicalInterfaceForDestination() { jmp(InternalGetIPPhysicalInterfaceForDestination); }
__declspec(naked) void _InternalGetIfEntry2() { jmp(InternalGetIfEntry2); }
__declspec(naked) void _InternalGetIfTable() { jmp(InternalGetIfTable); }
__declspec(naked) void _InternalGetIfTable2() { jmp(InternalGetIfTable2); }
__declspec(naked) void _InternalGetIpAddrTable() { jmp(InternalGetIpAddrTable); }
__declspec(naked) void _InternalGetIpForwardEntry2() { jmp(InternalGetIpForwardEntry2); }
__declspec(naked) void _InternalGetIpForwardTable() { jmp(InternalGetIpForwardTable); }
__declspec(naked) void _InternalGetIpInterfaceEntry() { jmp(InternalGetIpInterfaceEntry); }
__declspec(naked) void _InternalGetIpInterfaceTable() { jmp(InternalGetIpInterfaceTable); }
__declspec(naked) void _InternalGetIpNetEntry2() { jmp(InternalGetIpNetEntry2); }
__declspec(naked) void _InternalGetIpNetTable() { jmp(InternalGetIpNetTable); }
__declspec(naked) void _InternalGetIpNetTable2() { jmp(InternalGetIpNetTable2); }
__declspec(naked) void _InternalGetMulticastIpAddressEntry() { jmp(InternalGetMulticastIpAddressEntry); }
__declspec(naked) void _InternalGetMulticastIpAddressTable() { jmp(InternalGetMulticastIpAddressTable); }
__declspec(naked) void _InternalGetRtcSlotInformation() { jmp(InternalGetRtcSlotInformation); }
__declspec(naked) void _InternalGetTcp6Table2() { jmp(InternalGetTcp6Table2); }
__declspec(naked) void _InternalGetTcp6TableWithOwnerModule() { jmp(InternalGetTcp6TableWithOwnerModule); }
__declspec(naked) void _InternalGetTcp6TableWithOwnerPid() { jmp(InternalGetTcp6TableWithOwnerPid); }
__declspec(naked) void _InternalGetTcpTable() { jmp(InternalGetTcpTable); }
__declspec(naked) void _InternalGetTcpTable2() { jmp(InternalGetTcpTable2); }
__declspec(naked) void _InternalGetTcpTableEx() { jmp(InternalGetTcpTableEx); }
__declspec(naked) void _InternalGetTcpTableWithOwnerModule() { jmp(InternalGetTcpTableWithOwnerModule); }
__declspec(naked) void _InternalGetTcpTableWithOwnerPid() { jmp(InternalGetTcpTableWithOwnerPid); }
__declspec(naked) void _InternalGetTunnelPhysicalAdapter() { jmp(InternalGetTunnelPhysicalAdapter); }
__declspec(naked) void _InternalGetUdp6TableWithOwnerModule() { jmp(InternalGetUdp6TableWithOwnerModule); }
__declspec(naked) void _InternalGetUdp6TableWithOwnerPid() { jmp(InternalGetUdp6TableWithOwnerPid); }
__declspec(naked) void _InternalGetUdpTable() { jmp(InternalGetUdpTable); }
__declspec(naked) void _InternalGetUdpTableEx() { jmp(InternalGetUdpTableEx); }
__declspec(naked) void _InternalGetUdpTableWithOwnerModule() { jmp(InternalGetUdpTableWithOwnerModule); }
__declspec(naked) void _InternalGetUdpTableWithOwnerPid() { jmp(InternalGetUdpTableWithOwnerPid); }
__declspec(naked) void _InternalGetUnicastIpAddressEntry() { jmp(InternalGetUnicastIpAddressEntry); }
__declspec(naked) void _InternalGetUnicastIpAddressTable() { jmp(InternalGetUnicastIpAddressTable); }
__declspec(naked) void _InternalIcmpCreateFileEx() { jmp(InternalIcmpCreateFileEx); }
__declspec(naked) void _InternalSetIfEntry() { jmp(InternalSetIfEntry); }
__declspec(naked) void _InternalSetIpForwardEntry() { jmp(InternalSetIpForwardEntry); }
__declspec(naked) void _InternalSetIpForwardEntry2() { jmp(InternalSetIpForwardEntry2); }
__declspec(naked) void _InternalSetIpInterfaceEntry() { jmp(InternalSetIpInterfaceEntry); }
__declspec(naked) void _InternalSetIpNetEntry() { jmp(InternalSetIpNetEntry); }
__declspec(naked) void _InternalSetIpNetEntry2() { jmp(InternalSetIpNetEntry2); }
__declspec(naked) void _InternalSetIpStats() { jmp(InternalSetIpStats); }
__declspec(naked) void _InternalSetTcpEntry() { jmp(InternalSetTcpEntry); }
__declspec(naked) void _InternalSetTeredoPort() { jmp(InternalSetTeredoPort); }
__declspec(naked) void _InternalSetUnicastIpAddressEntry() { jmp(InternalSetUnicastIpAddressEntry); }
__declspec(naked) void _IpReleaseAddress() { jmp(IpReleaseAddress); }
__declspec(naked) void _IpRenewAddress() { jmp(IpRenewAddress); }
__declspec(naked) void _LookupPersistentTcpPortReservation() { jmp(LookupPersistentTcpPortReservation); }
__declspec(naked) void _LookupPersistentUdpPortReservation() { jmp(LookupPersistentUdpPortReservation); }
__declspec(naked) void _NTPTimeToNTFileTime() { jmp(NTPTimeToNTFileTime); }
__declspec(naked) void _NTTimeToNTPTime() { jmp(NTTimeToNTPTime); }
__declspec(naked) void _NhGetGuidFromInterfaceName() { jmp(NhGetGuidFromInterfaceName); }
__declspec(naked) void _NhGetInterfaceDescriptionFromGuid() { jmp(NhGetInterfaceDescriptionFromGuid); }
__declspec(naked) void _NhGetInterfaceNameFromDeviceGuid() { jmp(NhGetInterfaceNameFromDeviceGuid); }
__declspec(naked) void _NhGetInterfaceNameFromGuid() { jmp(NhGetInterfaceNameFromGuid); }
__declspec(naked) void _NhpAllocateAndGetInterfaceInfoFromStack() { jmp(NhpAllocateAndGetInterfaceInfoFromStack); }
__declspec(naked) void _NotifyAddrChange() { jmp(NotifyAddrChange); }
__declspec(naked) void _NotifyCompartmentChange() { jmp(NotifyCompartmentChange); }
__declspec(naked) void _NotifyIfTimestampConfigChange() { jmp(NotifyIfTimestampConfigChange); }
__declspec(naked) void _NotifyIpInterfaceChange() { jmp(NotifyIpInterfaceChange); }
__declspec(naked) void _NotifyNetworkConnectivityHintChange() { jmp(NotifyNetworkConnectivityHintChange); }
__declspec(naked) void _NotifyRouteChange() { jmp(NotifyRouteChange); }
__declspec(naked) void _NotifyRouteChange2() { jmp(NotifyRouteChange2); }
__declspec(naked) void _NotifyStableUnicastIpAddressTable() { jmp(NotifyStableUnicastIpAddressTable); }
__declspec(naked) void _NotifyTeredoPortChange() { jmp(NotifyTeredoPortChange); }
__declspec(naked) void _NotifyUnicastIpAddressChange() { jmp(NotifyUnicastIpAddressChange); }
__declspec(naked) void _OpenCompartment() { jmp(OpenCompartment); }
__declspec(naked) void _ParseNetworkString() { jmp(ParseNetworkString); }
__declspec(naked) void _PfAddFiltersToInterface() { jmp(PfAddFiltersToInterface); }
__declspec(naked) void _PfAddGlobalFilterToInterface() { jmp(PfAddGlobalFilterToInterface); }
__declspec(naked) void _PfBindInterfaceToIPAddress() { jmp(PfBindInterfaceToIPAddress); }
__declspec(naked) void _PfBindInterfaceToIndex() { jmp(PfBindInterfaceToIndex); }
__declspec(naked) void _PfCreateInterface() { jmp(PfCreateInterface); }
__declspec(naked) void _PfDeleteInterface() { jmp(PfDeleteInterface); }
__declspec(naked) void _PfDeleteLog() { jmp(PfDeleteLog); }
__declspec(naked) void _PfGetInterfaceStatistics() { jmp(PfGetInterfaceStatistics); }
__declspec(naked) void _PfMakeLog() { jmp(PfMakeLog); }
__declspec(naked) void _PfRebindFilters() { jmp(PfRebindFilters); }
__declspec(naked) void _PfRemoveFilterHandles() { jmp(PfRemoveFilterHandles); }
__declspec(naked) void _PfRemoveFiltersFromInterface() { jmp(PfRemoveFiltersFromInterface); }
__declspec(naked) void _PfRemoveGlobalFilterFromInterface() { jmp(PfRemoveGlobalFilterFromInterface); }
__declspec(naked) void _PfSetLogBuffer() { jmp(PfSetLogBuffer); }
__declspec(naked) void _PfTestPacket() { jmp(PfTestPacket); }
__declspec(naked) void _PfUnBindInterface() { jmp(PfUnBindInterface); }
__declspec(naked) void _ResolveIpNetEntry2() { jmp(ResolveIpNetEntry2); }
__declspec(naked) void _ResolveNeighbor() { jmp(ResolveNeighbor); }
__declspec(naked) void _RestoreMediaSense() { jmp(RestoreMediaSense); }
__declspec(naked) void _SendARP() { jmp(SendARP); }
__declspec(naked) void _SetAdapterIpAddress() { jmp(SetAdapterIpAddress); }
__declspec(naked) void _SetCurrentThreadCompartmentId() { jmp(SetCurrentThreadCompartmentId); }
__declspec(naked) void _SetCurrentThreadCompartmentScope() { jmp(SetCurrentThreadCompartmentScope); }
__declspec(naked) void _SetDnsSettings() { jmp(SetDnsSettings); }
__declspec(naked) void _SetIfEntry() { jmp(SetIfEntry); }
__declspec(naked) void _SetInterfaceDnsSettings() { jmp(SetInterfaceDnsSettings); }
__declspec(naked) void _SetIpForwardEntry() { jmp(SetIpForwardEntry); }
__declspec(naked) void _SetIpForwardEntry2() { jmp(SetIpForwardEntry2); }
__declspec(naked) void _SetIpInterfaceEntry() { jmp(SetIpInterfaceEntry); }
__declspec(naked) void _SetIpNetEntry() { jmp(SetIpNetEntry); }
__declspec(naked) void _SetIpNetEntry2() { jmp(SetIpNetEntry2); }
__declspec(naked) void _SetIpStatistics() { jmp(SetIpStatistics); }
__declspec(naked) void _SetIpStatisticsEx() { jmp(SetIpStatisticsEx); }
__declspec(naked) void _SetIpTTL() { jmp(SetIpTTL); }
__declspec(naked) void _SetJobCompartmentId() { jmp(SetJobCompartmentId); }
__declspec(naked) void _SetNetworkInformation() { jmp(SetNetworkInformation); }
__declspec(naked) void _SetPerTcp6ConnectionEStats() { jmp(SetPerTcp6ConnectionEStats); }
__declspec(naked) void _SetPerTcp6ConnectionStats() { jmp(SetPerTcp6ConnectionStats); }
__declspec(naked) void _SetPerTcpConnectionEStats() { jmp(SetPerTcpConnectionEStats); }
__declspec(naked) void _SetPerTcpConnectionStats() { jmp(SetPerTcpConnectionStats); }
__declspec(naked) void _SetSessionCompartmentId() { jmp(SetSessionCompartmentId); }
__declspec(naked) void _SetTcpEntry() { jmp(SetTcpEntry); }
__declspec(naked) void _SetUnicastIpAddressEntry() { jmp(SetUnicastIpAddressEntry); }
__declspec(naked) void _UnenableRouter() { jmp(UnenableRouter); }
__declspec(naked) void _do_echo_rep() { jmp(do_echo_rep); }
__declspec(naked) void _do_echo_req() { jmp(do_echo_req); }
__declspec(naked) void _if_indextoname() { jmp(if_indextoname); }
__declspec(naked) void _if_nametoindex() { jmp(if_nametoindex); }
__declspec(naked) void _register_icmp() { jmp(register_icmp); }

void init_fake_dll()
{
	AddIPAddress = GetProcAddress(fake_dll, "AddIPAddress");
	AllocateAndGetInterfaceInfoFromStack = GetProcAddress(fake_dll, "AllocateAndGetInterfaceInfoFromStack");
	AllocateAndGetIpAddrTableFromStack = GetProcAddress(fake_dll, "AllocateAndGetIpAddrTableFromStack");
	CancelIPChangeNotify = GetProcAddress(fake_dll, "CancelIPChangeNotify");
	CancelIfTimestampConfigChange = GetProcAddress(fake_dll, "CancelIfTimestampConfigChange");
	CancelMibChangeNotify2 = GetProcAddress(fake_dll, "CancelMibChangeNotify2");
	CaptureInterfaceHardwareCrossTimestamp = GetProcAddress(fake_dll, "CaptureInterfaceHardwareCrossTimestamp");
	CloseCompartment = GetProcAddress(fake_dll, "CloseCompartment");
	CloseGetIPPhysicalInterfaceForDestination = GetProcAddress(fake_dll, "CloseGetIPPhysicalInterfaceForDestination");
	ConvertCompartmentGuidToId = GetProcAddress(fake_dll, "ConvertCompartmentGuidToId");
	ConvertCompartmentIdToGuid = GetProcAddress(fake_dll, "ConvertCompartmentIdToGuid");
	ConvertGuidToStringA = GetProcAddress(fake_dll, "ConvertGuidToStringA");
	ConvertGuidToStringW = GetProcAddress(fake_dll, "ConvertGuidToStringW");
	ConvertInterfaceAliasToLuid = GetProcAddress(fake_dll, "ConvertInterfaceAliasToLuid");
	ConvertInterfaceGuidToLuid = GetProcAddress(fake_dll, "ConvertInterfaceGuidToLuid");
	ConvertInterfaceIndexToLuid = GetProcAddress(fake_dll, "ConvertInterfaceIndexToLuid");
	ConvertInterfaceLuidToAlias = GetProcAddress(fake_dll, "ConvertInterfaceLuidToAlias");
	ConvertInterfaceLuidToGuid = GetProcAddress(fake_dll, "ConvertInterfaceLuidToGuid");
	ConvertInterfaceLuidToIndex = GetProcAddress(fake_dll, "ConvertInterfaceLuidToIndex");
	ConvertInterfaceLuidToNameA = GetProcAddress(fake_dll, "ConvertInterfaceLuidToNameA");
	ConvertInterfaceLuidToNameW = GetProcAddress(fake_dll, "ConvertInterfaceLuidToNameW");
	ConvertInterfaceNameToLuidA = GetProcAddress(fake_dll, "ConvertInterfaceNameToLuidA");
	ConvertInterfaceNameToLuidW = GetProcAddress(fake_dll, "ConvertInterfaceNameToLuidW");
	ConvertInterfacePhysicalAddressToLuid = GetProcAddress(fake_dll, "ConvertInterfacePhysicalAddressToLuid");
	ConvertIpv4MaskToLength = GetProcAddress(fake_dll, "ConvertIpv4MaskToLength");
	ConvertLengthToIpv4Mask = GetProcAddress(fake_dll, "ConvertLengthToIpv4Mask");
	ConvertRemoteInterfaceAliasToLuid = GetProcAddress(fake_dll, "ConvertRemoteInterfaceAliasToLuid");
	ConvertRemoteInterfaceGuidToLuid = GetProcAddress(fake_dll, "ConvertRemoteInterfaceGuidToLuid");
	ConvertRemoteInterfaceIndexToLuid = GetProcAddress(fake_dll, "ConvertRemoteInterfaceIndexToLuid");
	ConvertRemoteInterfaceLuidToAlias = GetProcAddress(fake_dll, "ConvertRemoteInterfaceLuidToAlias");
	ConvertRemoteInterfaceLuidToGuid = GetProcAddress(fake_dll, "ConvertRemoteInterfaceLuidToGuid");
	ConvertRemoteInterfaceLuidToIndex = GetProcAddress(fake_dll, "ConvertRemoteInterfaceLuidToIndex");
	ConvertStringToGuidA = GetProcAddress(fake_dll, "ConvertStringToGuidA");
	ConvertStringToGuidW = GetProcAddress(fake_dll, "ConvertStringToGuidW");
	ConvertStringToInterfacePhysicalAddress = GetProcAddress(fake_dll, "ConvertStringToInterfacePhysicalAddress");
	CreateAnycastIpAddressEntry = GetProcAddress(fake_dll, "CreateAnycastIpAddressEntry");
	CreateCompartment = GetProcAddress(fake_dll, "CreateCompartment");
	CreateIpForwardEntry = GetProcAddress(fake_dll, "CreateIpForwardEntry");
	CreateIpForwardEntry2 = GetProcAddress(fake_dll, "CreateIpForwardEntry2");
	CreateIpNetEntry = GetProcAddress(fake_dll, "CreateIpNetEntry");
	CreateIpNetEntry2 = GetProcAddress(fake_dll, "CreateIpNetEntry2");
	CreatePersistentTcpPortReservation = GetProcAddress(fake_dll, "CreatePersistentTcpPortReservation");
	CreatePersistentUdpPortReservation = GetProcAddress(fake_dll, "CreatePersistentUdpPortReservation");
	CreateProxyArpEntry = GetProcAddress(fake_dll, "CreateProxyArpEntry");
	CreateSortedAddressPairs = GetProcAddress(fake_dll, "CreateSortedAddressPairs");
	CreateUnicastIpAddressEntry = GetProcAddress(fake_dll, "CreateUnicastIpAddressEntry");
	DeleteAnycastIpAddressEntry = GetProcAddress(fake_dll, "DeleteAnycastIpAddressEntry");
	DeleteCompartment = GetProcAddress(fake_dll, "DeleteCompartment");
	DeleteIPAddress = GetProcAddress(fake_dll, "DeleteIPAddress");
	DeleteIpForwardEntry = GetProcAddress(fake_dll, "DeleteIpForwardEntry");
	DeleteIpForwardEntry2 = GetProcAddress(fake_dll, "DeleteIpForwardEntry2");
	DeleteIpNetEntry = GetProcAddress(fake_dll, "DeleteIpNetEntry");
	DeleteIpNetEntry2 = GetProcAddress(fake_dll, "DeleteIpNetEntry2");
	DeletePersistentTcpPortReservation = GetProcAddress(fake_dll, "DeletePersistentTcpPortReservation");
	DeletePersistentUdpPortReservation = GetProcAddress(fake_dll, "DeletePersistentUdpPortReservation");
	DeleteProxyArpEntry = GetProcAddress(fake_dll, "DeleteProxyArpEntry");
	DeleteUnicastIpAddressEntry = GetProcAddress(fake_dll, "DeleteUnicastIpAddressEntry");
	DisableMediaSense = GetProcAddress(fake_dll, "DisableMediaSense");
	EnableRouter = GetProcAddress(fake_dll, "EnableRouter");
	FlushIpNetTable = GetProcAddress(fake_dll, "FlushIpNetTable");
	FlushIpNetTable2 = GetProcAddress(fake_dll, "FlushIpNetTable2");
	FlushIpPathTable = GetProcAddress(fake_dll, "FlushIpPathTable");
	FreeDnsSettings = GetProcAddress(fake_dll, "FreeDnsSettings");
	FreeInterfaceDnsSettings = GetProcAddress(fake_dll, "FreeInterfaceDnsSettings");
	FreeMibTable = GetProcAddress(fake_dll, "FreeMibTable");
	GetAdapterIndex = GetProcAddress(fake_dll, "GetAdapterIndex");
	GetAdapterOrderMap = GetProcAddress(fake_dll, "GetAdapterOrderMap");
	GetAdaptersAddresses = GetProcAddress(fake_dll, "GetAdaptersAddresses");
	GetAdaptersInfo = GetProcAddress(fake_dll, "GetAdaptersInfo");
	GetAnycastIpAddressEntry = GetProcAddress(fake_dll, "GetAnycastIpAddressEntry");
	GetAnycastIpAddressTable = GetProcAddress(fake_dll, "GetAnycastIpAddressTable");
	GetBestInterface = GetProcAddress(fake_dll, "GetBestInterface");
	GetBestInterfaceEx = GetProcAddress(fake_dll, "GetBestInterfaceEx");
	GetBestRoute = GetProcAddress(fake_dll, "GetBestRoute");
	GetBestRoute2 = GetProcAddress(fake_dll, "GetBestRoute2");
	GetCurrentThreadCompartmentId = GetProcAddress(fake_dll, "GetCurrentThreadCompartmentId");
	GetCurrentThreadCompartmentScope = GetProcAddress(fake_dll, "GetCurrentThreadCompartmentScope");
	GetDefaultCompartmentId = GetProcAddress(fake_dll, "GetDefaultCompartmentId");
	GetDnsSettings = GetProcAddress(fake_dll, "GetDnsSettings");
	GetExtendedTcpTable = GetProcAddress(fake_dll, "GetExtendedTcpTable");
	GetExtendedUdpTable = GetProcAddress(fake_dll, "GetExtendedUdpTable");
	GetFriendlyIfIndex = GetProcAddress(fake_dll, "GetFriendlyIfIndex");
	GetIcmpStatistics = GetProcAddress(fake_dll, "GetIcmpStatistics");
	GetIcmpStatisticsEx = GetProcAddress(fake_dll, "GetIcmpStatisticsEx");
	GetIfEntry = GetProcAddress(fake_dll, "GetIfEntry");
	GetIfEntry2 = GetProcAddress(fake_dll, "GetIfEntry2");
	GetIfEntry2Ex = GetProcAddress(fake_dll, "GetIfEntry2Ex");
	GetIfStackTable = GetProcAddress(fake_dll, "GetIfStackTable");
	GetIfTable = GetProcAddress(fake_dll, "GetIfTable");
	GetIfTable2 = GetProcAddress(fake_dll, "GetIfTable2");
	GetIfTable2Ex = GetProcAddress(fake_dll, "GetIfTable2Ex");
	GetInterfaceCompartmentId = GetProcAddress(fake_dll, "GetInterfaceCompartmentId");
	GetInterfaceCurrentTimestampCapabilities = GetProcAddress(fake_dll, "GetInterfaceCurrentTimestampCapabilities");
	GetInterfaceDnsSettings = GetProcAddress(fake_dll, "GetInterfaceDnsSettings");
	GetInterfaceHardwareTimestampCapabilities = GetProcAddress(fake_dll, "GetInterfaceHardwareTimestampCapabilities");
	GetInterfaceInfo = GetProcAddress(fake_dll, "GetInterfaceInfo");
	GetInvertedIfStackTable = GetProcAddress(fake_dll, "GetInvertedIfStackTable");
	GetIpAddrTable = GetProcAddress(fake_dll, "GetIpAddrTable");
	GetIpErrorString = GetProcAddress(fake_dll, "GetIpErrorString");
	GetIpForwardEntry2 = GetProcAddress(fake_dll, "GetIpForwardEntry2");
	GetIpForwardTable = GetProcAddress(fake_dll, "GetIpForwardTable");
	GetIpForwardTable2 = GetProcAddress(fake_dll, "GetIpForwardTable2");
	GetIpInterfaceEntry = GetProcAddress(fake_dll, "GetIpInterfaceEntry");
	GetIpInterfaceTable = GetProcAddress(fake_dll, "GetIpInterfaceTable");
	GetIpNetEntry2 = GetProcAddress(fake_dll, "GetIpNetEntry2");
	GetIpNetTable = GetProcAddress(fake_dll, "GetIpNetTable");
	GetIpNetTable2 = GetProcAddress(fake_dll, "GetIpNetTable2");
	GetIpNetworkConnectionBandwidthEstimates = GetProcAddress(fake_dll, "GetIpNetworkConnectionBandwidthEstimates");
	GetIpPathEntry = GetProcAddress(fake_dll, "GetIpPathEntry");
	GetIpPathTable = GetProcAddress(fake_dll, "GetIpPathTable");
	GetIpStatistics = GetProcAddress(fake_dll, "GetIpStatistics");
	GetIpStatisticsEx = GetProcAddress(fake_dll, "GetIpStatisticsEx");
	GetJobCompartmentId = GetProcAddress(fake_dll, "GetJobCompartmentId");
	GetMulticastIpAddressEntry = GetProcAddress(fake_dll, "GetMulticastIpAddressEntry");
	GetMulticastIpAddressTable = GetProcAddress(fake_dll, "GetMulticastIpAddressTable");
	GetNetworkConnectivityHint = GetProcAddress(fake_dll, "GetNetworkConnectivityHint");
	GetNetworkConnectivityHintForInterface = GetProcAddress(fake_dll, "GetNetworkConnectivityHintForInterface");
	GetNetworkInformation = GetProcAddress(fake_dll, "GetNetworkInformation");
	GetNetworkParams = GetProcAddress(fake_dll, "GetNetworkParams");
	GetNumberOfInterfaces = GetProcAddress(fake_dll, "GetNumberOfInterfaces");
	GetOwnerModuleFromPidAndInfo = GetProcAddress(fake_dll, "GetOwnerModuleFromPidAndInfo");
	GetOwnerModuleFromTcp6Entry = GetProcAddress(fake_dll, "GetOwnerModuleFromTcp6Entry");
	GetOwnerModuleFromTcpEntry = GetProcAddress(fake_dll, "GetOwnerModuleFromTcpEntry");
	GetOwnerModuleFromUdp6Entry = GetProcAddress(fake_dll, "GetOwnerModuleFromUdp6Entry");
	GetOwnerModuleFromUdpEntry = GetProcAddress(fake_dll, "GetOwnerModuleFromUdpEntry");
	GetPerAdapterInfo = GetProcAddress(fake_dll, "GetPerAdapterInfo");
	GetPerTcp6ConnectionEStats = GetProcAddress(fake_dll, "GetPerTcp6ConnectionEStats");
	GetPerTcp6ConnectionStats = GetProcAddress(fake_dll, "GetPerTcp6ConnectionStats");
	GetPerTcpConnectionEStats = GetProcAddress(fake_dll, "GetPerTcpConnectionEStats");
	GetPerTcpConnectionStats = GetProcAddress(fake_dll, "GetPerTcpConnectionStats");
	GetRTTAndHopCount = GetProcAddress(fake_dll, "GetRTTAndHopCount");
	GetSessionCompartmentId = GetProcAddress(fake_dll, "GetSessionCompartmentId");
	GetTcp6Table = GetProcAddress(fake_dll, "GetTcp6Table");
	GetTcp6Table2 = GetProcAddress(fake_dll, "GetTcp6Table2");
	GetTcpStatistics = GetProcAddress(fake_dll, "GetTcpStatistics");
	GetTcpStatisticsEx = GetProcAddress(fake_dll, "GetTcpStatisticsEx");
	GetTcpStatisticsEx2 = GetProcAddress(fake_dll, "GetTcpStatisticsEx2");
	GetTcpTable = GetProcAddress(fake_dll, "GetTcpTable");
	GetTcpTable2 = GetProcAddress(fake_dll, "GetTcpTable2");
	GetTeredoPort = GetProcAddress(fake_dll, "GetTeredoPort");
	GetUdp6Table = GetProcAddress(fake_dll, "GetUdp6Table");
	GetUdpStatistics = GetProcAddress(fake_dll, "GetUdpStatistics");
	GetUdpStatisticsEx = GetProcAddress(fake_dll, "GetUdpStatisticsEx");
	GetUdpStatisticsEx2 = GetProcAddress(fake_dll, "GetUdpStatisticsEx2");
	GetUdpTable = GetProcAddress(fake_dll, "GetUdpTable");
	GetUniDirectionalAdapterInfo = GetProcAddress(fake_dll, "GetUniDirectionalAdapterInfo");
	GetUnicastIpAddressEntry = GetProcAddress(fake_dll, "GetUnicastIpAddressEntry");
	GetUnicastIpAddressTable = GetProcAddress(fake_dll, "GetUnicastIpAddressTable");
	GetWPAOACSupportLevel = GetProcAddress(fake_dll, "GetWPAOACSupportLevel");
	Icmp6CreateFile = GetProcAddress(fake_dll, "Icmp6CreateFile");
	Icmp6ParseReplies = GetProcAddress(fake_dll, "Icmp6ParseReplies");
	Icmp6SendEcho2 = GetProcAddress(fake_dll, "Icmp6SendEcho2");
	IcmpCloseHandle = GetProcAddress(fake_dll, "IcmpCloseHandle");
	IcmpCreateFile = GetProcAddress(fake_dll, "IcmpCreateFile");
	IcmpParseReplies = GetProcAddress(fake_dll, "IcmpParseReplies");
	IcmpSendEcho = GetProcAddress(fake_dll, "IcmpSendEcho");
	IcmpSendEcho2 = GetProcAddress(fake_dll, "IcmpSendEcho2");
	IcmpSendEcho2Ex = GetProcAddress(fake_dll, "IcmpSendEcho2Ex");
	InitializeCompartmentEntry = GetProcAddress(fake_dll, "InitializeCompartmentEntry");
	InitializeIpForwardEntry = GetProcAddress(fake_dll, "InitializeIpForwardEntry");
	InitializeIpInterfaceEntry = GetProcAddress(fake_dll, "InitializeIpInterfaceEntry");
	InitializeUnicastIpAddressEntry = GetProcAddress(fake_dll, "InitializeUnicastIpAddressEntry");
	InternalCleanupPersistentStore = GetProcAddress(fake_dll, "InternalCleanupPersistentStore");
	InternalCreateAnycastIpAddressEntry = GetProcAddress(fake_dll, "InternalCreateAnycastIpAddressEntry");
	InternalCreateIpForwardEntry = GetProcAddress(fake_dll, "InternalCreateIpForwardEntry");
	InternalCreateIpForwardEntry2 = GetProcAddress(fake_dll, "InternalCreateIpForwardEntry2");
	InternalCreateIpNetEntry = GetProcAddress(fake_dll, "InternalCreateIpNetEntry");
	InternalCreateIpNetEntry2 = GetProcAddress(fake_dll, "InternalCreateIpNetEntry2");
	InternalCreateOrRefIpForwardEntry2 = GetProcAddress(fake_dll, "InternalCreateOrRefIpForwardEntry2");
	InternalCreateUnicastIpAddressEntry = GetProcAddress(fake_dll, "InternalCreateUnicastIpAddressEntry");
	InternalDeleteAnycastIpAddressEntry = GetProcAddress(fake_dll, "InternalDeleteAnycastIpAddressEntry");
	InternalDeleteIpForwardEntry = GetProcAddress(fake_dll, "InternalDeleteIpForwardEntry");
	InternalDeleteIpForwardEntry2 = GetProcAddress(fake_dll, "InternalDeleteIpForwardEntry2");
	InternalDeleteIpNetEntry = GetProcAddress(fake_dll, "InternalDeleteIpNetEntry");
	InternalDeleteIpNetEntry2 = GetProcAddress(fake_dll, "InternalDeleteIpNetEntry2");
	InternalDeleteUnicastIpAddressEntry = GetProcAddress(fake_dll, "InternalDeleteUnicastIpAddressEntry");
	InternalFindInterfaceByAddress = GetProcAddress(fake_dll, "InternalFindInterfaceByAddress");
	InternalGetAnycastIpAddressEntry = GetProcAddress(fake_dll, "InternalGetAnycastIpAddressEntry");
	InternalGetAnycastIpAddressTable = GetProcAddress(fake_dll, "InternalGetAnycastIpAddressTable");
	InternalGetBoundTcp6EndpointTable = GetProcAddress(fake_dll, "InternalGetBoundTcp6EndpointTable");
	InternalGetBoundTcpEndpointTable = GetProcAddress(fake_dll, "InternalGetBoundTcpEndpointTable");
	InternalGetForwardIpTable2 = GetProcAddress(fake_dll, "InternalGetForwardIpTable2");
	InternalGetIPPhysicalInterfaceForDestination = GetProcAddress(fake_dll, "InternalGetIPPhysicalInterfaceForDestination");
	InternalGetIfEntry2 = GetProcAddress(fake_dll, "InternalGetIfEntry2");
	InternalGetIfTable = GetProcAddress(fake_dll, "InternalGetIfTable");
	InternalGetIfTable2 = GetProcAddress(fake_dll, "InternalGetIfTable2");
	InternalGetIpAddrTable = GetProcAddress(fake_dll, "InternalGetIpAddrTable");
	InternalGetIpForwardEntry2 = GetProcAddress(fake_dll, "InternalGetIpForwardEntry2");
	InternalGetIpForwardTable = GetProcAddress(fake_dll, "InternalGetIpForwardTable");
	InternalGetIpInterfaceEntry = GetProcAddress(fake_dll, "InternalGetIpInterfaceEntry");
	InternalGetIpInterfaceTable = GetProcAddress(fake_dll, "InternalGetIpInterfaceTable");
	InternalGetIpNetEntry2 = GetProcAddress(fake_dll, "InternalGetIpNetEntry2");
	InternalGetIpNetTable = GetProcAddress(fake_dll, "InternalGetIpNetTable");
	InternalGetIpNetTable2 = GetProcAddress(fake_dll, "InternalGetIpNetTable2");
	InternalGetMulticastIpAddressEntry = GetProcAddress(fake_dll, "InternalGetMulticastIpAddressEntry");
	InternalGetMulticastIpAddressTable = GetProcAddress(fake_dll, "InternalGetMulticastIpAddressTable");
	InternalGetRtcSlotInformation = GetProcAddress(fake_dll, "InternalGetRtcSlotInformation");
	InternalGetTcp6Table2 = GetProcAddress(fake_dll, "InternalGetTcp6Table2");
	InternalGetTcp6TableWithOwnerModule = GetProcAddress(fake_dll, "InternalGetTcp6TableWithOwnerModule");
	InternalGetTcp6TableWithOwnerPid = GetProcAddress(fake_dll, "InternalGetTcp6TableWithOwnerPid");
	InternalGetTcpTable = GetProcAddress(fake_dll, "InternalGetTcpTable");
	InternalGetTcpTable2 = GetProcAddress(fake_dll, "InternalGetTcpTable2");
	InternalGetTcpTableEx = GetProcAddress(fake_dll, "InternalGetTcpTableEx");
	InternalGetTcpTableWithOwnerModule = GetProcAddress(fake_dll, "InternalGetTcpTableWithOwnerModule");
	InternalGetTcpTableWithOwnerPid = GetProcAddress(fake_dll, "InternalGetTcpTableWithOwnerPid");
	InternalGetTunnelPhysicalAdapter = GetProcAddress(fake_dll, "InternalGetTunnelPhysicalAdapter");
	InternalGetUdp6TableWithOwnerModule = GetProcAddress(fake_dll, "InternalGetUdp6TableWithOwnerModule");
	InternalGetUdp6TableWithOwnerPid = GetProcAddress(fake_dll, "InternalGetUdp6TableWithOwnerPid");
	InternalGetUdpTable = GetProcAddress(fake_dll, "InternalGetUdpTable");
	InternalGetUdpTableEx = GetProcAddress(fake_dll, "InternalGetUdpTableEx");
	InternalGetUdpTableWithOwnerModule = GetProcAddress(fake_dll, "InternalGetUdpTableWithOwnerModule");
	InternalGetUdpTableWithOwnerPid = GetProcAddress(fake_dll, "InternalGetUdpTableWithOwnerPid");
	InternalGetUnicastIpAddressEntry = GetProcAddress(fake_dll, "InternalGetUnicastIpAddressEntry");
	InternalGetUnicastIpAddressTable = GetProcAddress(fake_dll, "InternalGetUnicastIpAddressTable");
	InternalIcmpCreateFileEx = GetProcAddress(fake_dll, "InternalIcmpCreateFileEx");
	InternalSetIfEntry = GetProcAddress(fake_dll, "InternalSetIfEntry");
	InternalSetIpForwardEntry = GetProcAddress(fake_dll, "InternalSetIpForwardEntry");
	InternalSetIpForwardEntry2 = GetProcAddress(fake_dll, "InternalSetIpForwardEntry2");
	InternalSetIpInterfaceEntry = GetProcAddress(fake_dll, "InternalSetIpInterfaceEntry");
	InternalSetIpNetEntry = GetProcAddress(fake_dll, "InternalSetIpNetEntry");
	InternalSetIpNetEntry2 = GetProcAddress(fake_dll, "InternalSetIpNetEntry2");
	InternalSetIpStats = GetProcAddress(fake_dll, "InternalSetIpStats");
	InternalSetTcpEntry = GetProcAddress(fake_dll, "InternalSetTcpEntry");
	InternalSetTeredoPort = GetProcAddress(fake_dll, "InternalSetTeredoPort");
	InternalSetUnicastIpAddressEntry = GetProcAddress(fake_dll, "InternalSetUnicastIpAddressEntry");
	IpReleaseAddress = GetProcAddress(fake_dll, "IpReleaseAddress");
	IpRenewAddress = GetProcAddress(fake_dll, "IpRenewAddress");
	LookupPersistentTcpPortReservation = GetProcAddress(fake_dll, "LookupPersistentTcpPortReservation");
	LookupPersistentUdpPortReservation = GetProcAddress(fake_dll, "LookupPersistentUdpPortReservation");
	NTPTimeToNTFileTime = GetProcAddress(fake_dll, "NTPTimeToNTFileTime");
	NTTimeToNTPTime = GetProcAddress(fake_dll, "NTTimeToNTPTime");
	NhGetGuidFromInterfaceName = GetProcAddress(fake_dll, "NhGetGuidFromInterfaceName");
	NhGetInterfaceDescriptionFromGuid = GetProcAddress(fake_dll, "NhGetInterfaceDescriptionFromGuid");
	NhGetInterfaceNameFromDeviceGuid = GetProcAddress(fake_dll, "NhGetInterfaceNameFromDeviceGuid");
	NhGetInterfaceNameFromGuid = GetProcAddress(fake_dll, "NhGetInterfaceNameFromGuid");
	NhpAllocateAndGetInterfaceInfoFromStack = GetProcAddress(fake_dll, "NhpAllocateAndGetInterfaceInfoFromStack");
	NotifyAddrChange = GetProcAddress(fake_dll, "NotifyAddrChange");
	NotifyCompartmentChange = GetProcAddress(fake_dll, "NotifyCompartmentChange");
	NotifyIfTimestampConfigChange = GetProcAddress(fake_dll, "NotifyIfTimestampConfigChange");
	NotifyIpInterfaceChange = GetProcAddress(fake_dll, "NotifyIpInterfaceChange");
	NotifyNetworkConnectivityHintChange = GetProcAddress(fake_dll, "NotifyNetworkConnectivityHintChange");
	NotifyRouteChange = GetProcAddress(fake_dll, "NotifyRouteChange");
	NotifyRouteChange2 = GetProcAddress(fake_dll, "NotifyRouteChange2");
	NotifyStableUnicastIpAddressTable = GetProcAddress(fake_dll, "NotifyStableUnicastIpAddressTable");
	NotifyTeredoPortChange = GetProcAddress(fake_dll, "NotifyTeredoPortChange");
	NotifyUnicastIpAddressChange = GetProcAddress(fake_dll, "NotifyUnicastIpAddressChange");
	OpenCompartment = GetProcAddress(fake_dll, "OpenCompartment");
	ParseNetworkString = GetProcAddress(fake_dll, "ParseNetworkString");
	PfAddFiltersToInterface = GetProcAddress(fake_dll, "PfAddFiltersToInterface");
	PfAddGlobalFilterToInterface = GetProcAddress(fake_dll, "PfAddGlobalFilterToInterface");
	PfBindInterfaceToIPAddress = GetProcAddress(fake_dll, "PfBindInterfaceToIPAddress");
	PfBindInterfaceToIndex = GetProcAddress(fake_dll, "PfBindInterfaceToIndex");
	PfCreateInterface = GetProcAddress(fake_dll, "PfCreateInterface");
	PfDeleteInterface = GetProcAddress(fake_dll, "PfDeleteInterface");
	PfDeleteLog = GetProcAddress(fake_dll, "PfDeleteLog");
	PfGetInterfaceStatistics = GetProcAddress(fake_dll, "PfGetInterfaceStatistics");
	PfMakeLog = GetProcAddress(fake_dll, "PfMakeLog");
	PfRebindFilters = GetProcAddress(fake_dll, "PfRebindFilters");
	PfRemoveFilterHandles = GetProcAddress(fake_dll, "PfRemoveFilterHandles");
	PfRemoveFiltersFromInterface = GetProcAddress(fake_dll, "PfRemoveFiltersFromInterface");
	PfRemoveGlobalFilterFromInterface = GetProcAddress(fake_dll, "PfRemoveGlobalFilterFromInterface");
	PfSetLogBuffer = GetProcAddress(fake_dll, "PfSetLogBuffer");
	PfTestPacket = GetProcAddress(fake_dll, "PfTestPacket");
	PfUnBindInterface = GetProcAddress(fake_dll, "PfUnBindInterface");
	ResolveIpNetEntry2 = GetProcAddress(fake_dll, "ResolveIpNetEntry2");
	ResolveNeighbor = GetProcAddress(fake_dll, "ResolveNeighbor");
	RestoreMediaSense = GetProcAddress(fake_dll, "RestoreMediaSense");
	SendARP = GetProcAddress(fake_dll, "SendARP");
	SetAdapterIpAddress = GetProcAddress(fake_dll, "SetAdapterIpAddress");
	SetCurrentThreadCompartmentId = GetProcAddress(fake_dll, "SetCurrentThreadCompartmentId");
	SetCurrentThreadCompartmentScope = GetProcAddress(fake_dll, "SetCurrentThreadCompartmentScope");
	SetDnsSettings = GetProcAddress(fake_dll, "SetDnsSettings");
	SetIfEntry = GetProcAddress(fake_dll, "SetIfEntry");
	SetInterfaceDnsSettings = GetProcAddress(fake_dll, "SetInterfaceDnsSettings");
	SetIpForwardEntry = GetProcAddress(fake_dll, "SetIpForwardEntry");
	SetIpForwardEntry2 = GetProcAddress(fake_dll, "SetIpForwardEntry2");
	SetIpInterfaceEntry = GetProcAddress(fake_dll, "SetIpInterfaceEntry");
	SetIpNetEntry = GetProcAddress(fake_dll, "SetIpNetEntry");
	SetIpNetEntry2 = GetProcAddress(fake_dll, "SetIpNetEntry2");
	SetIpStatistics = GetProcAddress(fake_dll, "SetIpStatistics");
	SetIpStatisticsEx = GetProcAddress(fake_dll, "SetIpStatisticsEx");
	SetIpTTL = GetProcAddress(fake_dll, "SetIpTTL");
	SetJobCompartmentId = GetProcAddress(fake_dll, "SetJobCompartmentId");
	SetNetworkInformation = GetProcAddress(fake_dll, "SetNetworkInformation");
	SetPerTcp6ConnectionEStats = GetProcAddress(fake_dll, "SetPerTcp6ConnectionEStats");
	SetPerTcp6ConnectionStats = GetProcAddress(fake_dll, "SetPerTcp6ConnectionStats");
	SetPerTcpConnectionEStats = GetProcAddress(fake_dll, "SetPerTcpConnectionEStats");
	SetPerTcpConnectionStats = GetProcAddress(fake_dll, "SetPerTcpConnectionStats");
	SetSessionCompartmentId = GetProcAddress(fake_dll, "SetSessionCompartmentId");
	SetTcpEntry = GetProcAddress(fake_dll, "SetTcpEntry");
	SetUnicastIpAddressEntry = GetProcAddress(fake_dll, "SetUnicastIpAddressEntry");
	UnenableRouter = GetProcAddress(fake_dll, "UnenableRouter");
	do_echo_rep = GetProcAddress(fake_dll, "do_echo_rep");
	do_echo_req = GetProcAddress(fake_dll, "do_echo_req");
	if_indextoname = GetProcAddress(fake_dll, "if_indextoname");
	if_nametoindex = GetProcAddress(fake_dll, "if_nametoindex");
	register_icmp = GetProcAddress(fake_dll, "register_icmp");
}
