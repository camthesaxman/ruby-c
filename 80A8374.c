int __fastcall sub_80A8374(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r3@1
  int v3; // r5@1
  int v4; // r4@1
  __int16 v5; // r1@1
  char *v6; // r1@2
  int v7; // r2@2
  int *v8; // r2@5
  int v9; // r1@5
  int v10; // r0@5
  int v12; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_BYTE *)v2 + 8);
  LOWORD(v4) = *((_WORD *)v2 + 5);
  v5 = *((_WORD *)v2 + 12);
  *((_WORD *)v2 + 12) = v5 + 1;
  if ( *((_WORD *)v2 + 6) == v5 )
  {
    *((_WORD *)v2 + 12) = 0;
    v6 = &gSprites[68 * v3];
    v7 = *((_WORD *)v6 + 18);
    if ( v7 == (signed __int16)v4 )
      v4 = 0xFFFF * v7 & 0xFFFF;
    *((_WORD *)v6 + 18) += v4;
  }
  v8 = &dword_3004B20[10 * a1];
  *((_WORD *)v8 + 5) = v4;
  v9 = *((_WORD *)v8 + 7) + *((_WORD *)v8 + 13);
  *((_WORD *)v8 + 13) = v9;
  *(_WORD *)&gSprites[68 * v3 + 38] = v9 << 16 >> 24;
  v10 = *((_WORD *)v8 + 8) - 1;
  *((_WORD *)v8 + 8) = v10;
  if ( !(v10 << 16) )
    move_anim_task_del(v1);
  return v12;
}
