int NamingScreen_Init()
{
  int v1; // [sp+Ch] [bp-4h]@0

  GetNamingScreenParameters();
  v2000000 = 0;
  v2000004 = 0;
  v2000006 = 0;
  v2000008 = 1;
  v200000A = 2;
  v200000C = 0;
  v200000D = 1;
  v2000034 = *(&gUnknown_083CE398 + v2000001);
  v200000E = *(_BYTE *)(v2000034 + 4);
  v2000002 = 14 - ((unsigned int)*(_BYTE *)(v2000034 + 1) >> 1);
  v200003C = gKeyRepeatStartDelay;
  memset(33554449, 255, 16);
  if ( *v2000034 )
    StringCopy((_BYTE *)0x2000011, v2000038);
  gKeyRepeatStartDelay = 16;
  return v1;
}
