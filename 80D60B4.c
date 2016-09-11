int __fastcall sub_80D60B4(unsigned __int8 a1)
{
  int v1; // r7@1
  int *v2; // r2@1
  int v3; // r6@3
  _BYTE *v4; // r4@4
  signed int v5; // r0@4
  char v6; // r5@6
  char *v7; // r2@7
  int v8; // r3@7
  int v9; // r0@7
  int v10; // r0@12
  int v12; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v2 + 4) )
  {
    *((_WORD *)v2 + 5) = word_3004B00[0];
    *((_WORD *)v2 + 6) = word_3004B02;
    *((_WORD *)v2 + 7) = word_3004B04;
    *((_WORD *)v2 + 8) = word_3004B06;
  }
  ++*((_WORD *)v2 + 4);
  v3 = *(_BYTE *)(v202F7C9 + 0x2024BE0);
  if ( *((_WORD *)v2 + 8) )
  {
    v4 = &gUnknown_083D97A4;
    v5 = *((_WORD *)v2 + 4);
  }
  else
  {
    v4 = &gUnknown_083D9794;
    v5 = *((_WORD *)v2 + 4);
  }
  v6 = v4[v5 % 10];
  if ( HIWORD(dword_3004B20[10 * v1 + 3]) == 1 )
  {
    v7 = gSprites;
    v8 = 16 * v3;
    v9 = v6 * word_3004B02;
    if ( v9 < 0 )
      v9 = -v9;
    *(_WORD *)&gSprites[68 * v3 + 38] = v9;
  }
  else
  {
    *(_WORD *)&gSprites[68 * v3 + 36] = v6 * word_3004B02;
    v7 = gSprites;
    v8 = 16 * v3;
  }
  if ( LOWORD(dword_3004B20[10 * v1 + 2]) == HIWORD(dword_3004B20[10 * v1 + 2]) )
  {
    v10 = (int)&v7[4 * (v8 + v3)];
    *(_WORD *)(v10 + 36) = 0;
    *(_WORD *)(v10 + 38) = 0;
    move_anim_task_del(v1);
  }
  return v12;
}
