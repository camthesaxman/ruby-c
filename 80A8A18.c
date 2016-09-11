int __fastcall sub_80A8A18(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  int v3; // r0@3
  int v4; // r2@3
  int v5; // r0@3
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( (signed int)*((_WORD *)v2 + 8) <= 0 )
  {
    v3 = *((_BYTE *)v2 + 8);
    v4 = *((_WORD *)v2 + 9) + *((_WORD *)v2 + 16);
    *((_WORD *)v2 + 16) = v4;
    *(_WORD *)&gSprites[68 * v3 + 36] = (v4 << 16 >> 24) + (*((_WORD *)v2 + 15) << 16 >> 24);
    v5 = *((_WORD *)v2 + 10) - 1;
    *((_WORD *)v2 + 10) = v5;
    if ( !(v5 << 16) )
      move_anim_task_del(v1);
  }
  else
  {
    --*((_WORD *)v2 + 8);
  }
  return v7;
}
