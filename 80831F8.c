int __fastcall sub_80831F8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r5@1
  unsigned __int8 v3; // r7@1
  unsigned __int8 v4; // r6@1
  int (*v5)(); // r0@5
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_BYTE *)v2 + 10);
  v4 = *((_BYTE *)v2 + 12);
  if ( sub_8082E28(a1) != 1 && sub_8082DF4(v1) != 1 )
  {
    v202E8DC = sub_8082D9C(v3, v4);
    if ( v202E8DC )
    {
      if ( v202E8DC == 3 )
      {
        sub_800832C();
        textbox_close();
        v5 = sub_80833C4;
      }
      else
      {
        byte_3004864 = GetLinkPlayerCount_2();
        byte_3004860 = GetMultiplayerId();
        sub_80081C8(byte_3004864);
        sub_8093390(&gBlockSendBuffer);
        v5 = sub_8083314;
      }
      *v2 = (int)v5;
    }
  }
  return v7;
}
