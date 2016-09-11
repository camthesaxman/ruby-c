int __fastcall sub_80816A8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  _BYTE *v2; // r7@1
  unsigned int v3; // r0@1
  int v4; // r3@3
  int v5; // r0@8
  int v6; // r0@9
  __int16 v7; // r1@9
  int v8; // r0@13
  int v10; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = *(_WORD *)v2;
  if ( v3 <= 7 )
  {
    switch ( v3 )
    {
      case 0u:
        *((_WORD *)v2 + 6) = v4000000;
        *((_WORD *)v2 + 7) = v4000050;
        *((_WORD *)v2 + 8) = v4000052;
        *((_WORD *)v2 + 9) = v4000048;
        *((_WORD *)v2 + 10) = v400004A;
        v4000000 &= 0xBFFFu;
        v4000050 |= gUnknown_081E29E8;
        v4000052 = 1804;
        v4000048 = 63;
        v400004A = 30;
        sub_8081398((int)word_3004DE0, *((_WORD *)v2 + 2), *((_WORD *)v2 + 3), 1);
        CpuFastSet(word_3004DE0, &word_3005560, 480);
        sub_80895F8(67108928, -1570766847, 1, v4);
        *(_WORD *)v2 = 1;
        break;
      case 1u:
        MenuFillWindowRectWithBlankTile(0, 0, 0x1Du, 0x13u);
        sub_808161C(v2[2]);
        sub_8081534(*((_WORD *)v2 + 2), *((_WORD *)v2 + 3), 1, 160, 1, 2u);
        *(_WORD *)v2 = 2;
        break;
      case 2u:
        if ( !(FuncIsActiveTask((int)sub_8081424) << 24) )
        {
          script_env_2_enable_and_set_ctx_running();
          *(_WORD *)v2 = 3;
        }
        break;
      case 3u:
        InstallCameraPanAheadCallback();
        SetCameraPanningCallback(0);
        *((_WORD *)v2 + 5) = 0;
        *((_WORD *)v2 + 4) = 4;
        *(_WORD *)v2 = 4;
        break;
      case 4u:
        v5 = *((_WORD *)v2 + 4) - 1;
        *((_WORD *)v2 + 4) = v5;
        if ( !(v5 << 16) )
        {
          *((_WORD *)v2 + 4) = 4;
          v6 = *((_WORD *)v2 + 5) ^ 1;
          *((_WORD *)v2 + 5) = v6;
          v7 = -4;
          if ( v6 )
            v7 = 4;
          SetCameraPanning(0, v7);
        }
        break;
      case 6u:
        InstallCameraPanAheadCallback();
        *((_WORD *)v2 + 4) = 8;
        *(_WORD *)v2 = 7;
        break;
      case 7u:
        v8 = *((_WORD *)v2 + 4) - 1;
        *((_WORD *)v2 + 4) = v8;
        if ( !(v8 << 16) )
        {
          *((_WORD *)v2 + 4) = 8;
          *((_WORD *)v2 + 5) ^= 1u;
          if ( (unsigned __int8)sub_8081658(*((_WORD *)v2 + 5)) == 1 )
            *(_WORD *)v2 = 5;
        }
        break;
      case 5u:
        MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
        LoadFontDefaultPalette((int)&gWindowConfig_81E6CE4);
        v4000040 = 255;
        v4000000 = *((_WORD *)v2 + 6);
        v4000050 = *((_WORD *)v2 + 7);
        v4000052 = *((_WORD *)v2 + 8);
        v4000048 = *((_WORD *)v2 + 9);
        v400004A = *((_WORD *)v2 + 10);
        script_env_2_enable_and_set_ctx_running();
        DestroyTask(v1);
        break;
      default:
        return v10;
    }
  }
  return v10;
}
