int __fastcall sub_804272C(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r5@1
  int *v3; // r1@2
  signed int v4; // r0@3
  int *v5; // r1@5
  int v6; // r0@9
  int v7; // r0@11
  int v9; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( word_300179E & 0x40 )
  {
    v3 = &dword_3004B20[10 * a1];
    if ( *((_WORD *)v3 + 4) )
    {
      --*((_WORD *)v3 + 4);
      v4 = -1;
_0804278A:
      MoveMenuCursor(v4);
      audio_play(5);
      return v9;
    }
  }
  else if ( word_300179E & 0x80 )
  {
    v5 = &dword_3004B20[10 * a1];
    if ( *((_WORD *)v5 + 4) != 2 )
    {
      ++*((_WORD *)v5 + 4);
      v4 = 1;
      goto _0804278A;
    }
  }
  else if ( word_300179E & 1 )
  {
    sub_8072DEC();
    audio_play(5);
    v202E8DC = dword_3004B20[10 * v1 + 2];
    byte_3005CE0 = v202E8DC;
    DestroyTask(v1);
    v6 = MenuZeroFillWindowRect(15, 6, 29, 13);
    script_env_2_enable_and_set_ctx_running(v6);
  }
  else if ( word_300179E & 2 )
  {
    sub_8072DEC();
    v202E8DC = 2;
    byte_3005CE0 = 2;
    DestroyTask(v2);
    v7 = MenuZeroFillWindowRect(15, 6, 29, 13);
    script_env_2_enable_and_set_ctx_running(v7);
  }
  return v9;
}
