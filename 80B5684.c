int __fastcall sub_80B5684(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r1@1
  int v3; // r4@3
  int v4; // r0@4
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = (char)sub_80727CC();
  if ( v2 != -2 )
  {
    if ( v2 != -1 )
    {
      v4 = 33745116;
      v202E8DC = v2;
      v3 = 4 * v1;
      goto _080B56D2;
    }
    v3 = 4 * v1;
    if ( !LOWORD(dword_3004B20[10 * v1 + 4]) )
    {
      audio_play(5u);
      v4 = 127;
      v202E8DC = 127;
_080B56D2:
      sub_8072DEC(v4);
      MenuZeroFillWindowRect(
        dword_3004B20[2 * (v3 + v1) + 2],
        BYTE2(dword_3004B20[2 * (v3 + v1) + 2]),
        dword_3004B20[2 * (v3 + v1) + 3],
        BYTE2(dword_3004B20[2 * (v3 + v1) + 3]));
      DestroyTask(v1);
      script_env_2_enable_and_set_ctx_running();
      return v6;
    }
  }
  return v6;
}
