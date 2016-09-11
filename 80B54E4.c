int __fastcall task_yes_no_maybe(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r1@1
  signed int v3; // r1@3
  signed __int16 v4; // r0@9
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( (signed int)*((_WORD *)v2 + 6) > 4 )
  {
    v3 = (char)ProcessMenuInputNoWrap();
    if ( v3 != -1 )
    {
      if ( v3 <= -1 )
      {
        if ( v3 == -2 )
          return v6;
_080B5542:
        MenuZeroFillWindowRect(
          dword_3004B20[10 * v1 + 2],
          BYTE2(dword_3004B20[10 * v1 + 2]),
          LOBYTE(dword_3004B20[10 * v1 + 2]) + 6,
          BYTE2(dword_3004B20[10 * v1 + 2]) + 5);
        DestroyTask(v1);
        script_env_2_enable_and_set_ctx_running();
        return v6;
      }
      if ( !v3 )
      {
        v4 = 1;
        goto _080B5540;
      }
      if ( v3 != 1 )
        goto _080B5542;
    }
    audio_play(5u);
    v4 = 0;
_080B5540:
    v202E8DC = v4;
    goto _080B5542;
  }
  ++*((_WORD *)v2 + 6);
  return v6;
}
