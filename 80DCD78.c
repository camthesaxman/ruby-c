int __fastcall sub_80DCD78(int a1)
{
  int v1; // r4@1
  int v2; // r7@3
  int v3; // r5@3
  int v4; // r12@3
  int v5; // r6@3
  _WORD *v6; // r2@3
  char *v7; // r1@3
  signed int v8; // r3@3
  int v9; // r5@5
  int v10; // r6@5
  int v11; // r0@6
  char *v12; // r2@6
  _WORD *v13; // r1@6
  signed int v14; // r3@6
  char v16; // [sp+4h] [bp-28h]@3
  int v17; // [sp+28h] [bp-4h]@8

  v1 = a1;
  *(_BYTE *)(a1 + 62) &= 0xFBu;
  if ( sub_8078718(a1) << 24 )
  {
    move_anim_8072740(v1);
  }
  else
  {
    v2 = *(_WORD *)(v1 + 32);
    v3 = *(_WORD *)(v1 + 36);
    v4 = *(_WORD *)(v1 + 34);
    v5 = *(_WORD *)(v1 + 38);
    v6 = (_WORD *)(v1 + 46);
    v7 = &v16;
    v8 = 7;
    do
    {
      *(_WORD *)v7 = *v6;
      ++v6;
      v7 += 2;
      --v8;
    }
    while ( v8 >= 0 );
    v9 = (v2 + v3) & 0xFFFF;
    v10 = (v4 + v5) & 0xFFFF;
    if ( !(sub_8078718(v1) << 24) )
    {
      v11 = sub_80790F0(*(_WORD *)(v1 + 36) + *(_WORD *)(v1 + 32) - v9, *(_WORD *)(v1 + 38) + *(_WORD *)(v1 + 34) - v10);
      sub_8078FDC(v1, 0, 0x100u, 0x100u, (unsigned int)((v11 << 16) - 0x40000000) >> 16);
      v12 = &v16;
      v13 = (_WORD *)(v1 + 46);
      v14 = 7;
      do
      {
        *v13 = *(_WORD *)v12;
        v12 += 2;
        ++v13;
        --v14;
      }
      while ( v14 >= 0 );
    }
  }
  return v17;
}
