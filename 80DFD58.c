int __fastcall sub_80DFD58(unsigned __int8 a1)
{
  int *v1; // r2@1
  unsigned int v2; // r3@2
  int v3; // r1@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 6) == *((_BYTE *)v1 + 8) )
  {
    v2 = (*((_WORD *)v1 + 5) / 0x100u - 1) & 0xFF;
    v3 = (v2 << 8) | ((*((_WORD *)v1 + 5) & 0xFF) + 1) & 0xFF;
    *((_WORD *)v1 + 5) = v3;
    v4000052 = v3;
    *((_WORD *)v1 + 6) = 0;
    if ( !v2 )
    {
      v4000050 = 0;
      v4000052 = 0;
      move_anim_task_del(a1);
    }
  }
  else
  {
    ++*((_WORD *)v1 + 6);
  }
  return v5;
}
