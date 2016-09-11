int __fastcall sub_80F87C4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r4@1
  int v3; // r5@1
  char v4; // r0@4
  int v5; // r4@5
  char *v6; // r0@8
  int v8; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( *((_WORD *)v2 + 4) )
  {
    if ( v3 == 1 )
    {
      v5 = (char)ProcessMenuInput();
      if ( v5 != -2 )
      {
        if ( v5 != -1 && v5 != (unsigned __int8)sub_80F849C() )
        {
          v202E8DC = 1;
          v6 = &byte_3000748;
          byte_3000748 = v5;
        }
        else
        {
          v6 = 0;
          v202E8DC = 0;
        }
        sub_8072DEC((int)v6);
        MenuZeroFillWindowRect(0, 0, 0x19u, 0xCu);
        DestroyTask(v1);
        script_env_2_enable_and_set_ctx_running();
      }
    }
  }
  else
  {
    sub_80F8758();
    v4 = sub_80F849C();
    InitMenu(0, 1, 2, v4 + 1, v3, 24);
    ++*((_WORD *)v2 + 4);
  }
  return v8;
}
