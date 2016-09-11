int __fastcall sub_8083288(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  if ( sub_8082DF4(BYTE3(v1)) != 1 )
  {
    if ( v202E8DC == 3 )
    {
      sub_800832C();
      textbox_close();
      dword_3004B20[10 * v2] = (int)sub_80833C4;
    }
    else
    {
      byte_3004864 = GetLinkPlayerCount_2();
      byte_3004860 = GetMultiplayerId();
      sub_80081C8(byte_3004864);
      sub_8093390(&gBlockSendBuffer);
      dword_3004B20[10 * v3] = (int)sub_8083314;
      sub_8007E9C(2);
    }
  }
  return v5;
}
