int __fastcall sub_80B52B4(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@3
  __int16 v3; // r1@5
  int v4; // r0@8
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v2 = HIWORD(dword_3004B20[10 * a1 + 4]) ? (unsigned __int8)ProcessMenuInput() : (unsigned __int8)ProcessMenuInputNoWrap();
    v3 = (char)v2;
    if ( (char)v2 != -2 )
    {
      if ( (char)v2 != -1 )
      {
        v4 = 33745116;
        v202E8DC = v3;
        goto _080B532C;
      }
      if ( !LOWORD(dword_3004B20[10 * v1 + 4]) )
      {
        audio_play(5u);
        v4 = 127;
        v202E8DC = 127;
_080B532C:
        sub_8072DEC(v4);
        MenuZeroFillWindowRect(
          dword_3004B20[10 * v1 + 2],
          BYTE2(dword_3004B20[10 * v1 + 2]),
          dword_3004B20[10 * v1 + 3],
          BYTE2(dword_3004B20[10 * v1 + 3]));
        DestroyTask(v1);
        script_env_2_enable_and_set_ctx_running();
        return v6;
      }
    }
  }
  return v6;
}
