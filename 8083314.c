int __fastcall sub_8083314(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r5@1
  int v3; // r4@2
  unsigned int i; // r4@3
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  if ( sub_8082DF4(BYTE3(v1)) != 1 )
  {
    v3 = GetBlockRecievedStatus();
    if ( v3 << 24 == sub_8008198() << 24 )
    {
      for ( i = 0; i < (unsigned __int8)GetLinkPlayerCount(); i = (i + 1) & 0xFF )
        memcpy(56 * i + 33750976, &gBlockRecvBuffer[64 * i], 56);
      SetSuppressLinkErrorMessage(0);
      ResetBlockReceivedFlags();
      textbox_close();
      if ( v202E8DC == 1 )
      {
        sub_8082D4C();
        script_env_2_enable_and_set_ctx_running();
        DestroyTask(v2);
      }
      else
      {
        sub_800832C();
        dword_3004B20[10 * v2] = (int)sub_80833C4;
      }
    }
  }
  return v6;
}
