int __fastcall sub_8068C30(int a1, char a2, int a3)
{
  int v3; // r5@1
  char v4; // r7@1
  int v5; // r6@1
  int v6; // r4@1
  int v7; // r0@2
  int v8; // r1@3
  int v9; // r1@3
  int v11; // [sp+10h] [bp-4h]@0

  v3 = a3;
  v4 = a2;
  v5 = 8 * a2;
  v6 = *(_DWORD *)(v202E82C + 8) + v5;
  if ( *(_BYTE *)(v6 + 6) == 127 )
  {
    v7 = *(_BYTE *)(v6 + 5);
    copy_saved_warp2_bank_and_enter_x_to_warp1();
  }
  else
  {
    warp1_set_2(*(_BYTE *)(v6 + 7), *(_BYTE *)(v6 + 6), *(_BYTE *)(v6 + 5));
    v8 = *(_WORD *)(v3 + 2);
    sub_80535C4(*(_WORD *)v3);
    v9 = *(_DWORD *)(*(_DWORD *)(get_mapheader_by_bank_and_number(*(_BYTE *)(v6 + 7), *(_BYTE *)(v6 + 6)) + 4) + 8);
    if ( *(_BYTE *)(8 * *(_BYTE *)(v6 + 5) + v9 + 6) == 127 )
      saved_warp2_set(*(_BYTE *)(v5 + v9 + 5), v2025738, v2025739, v4);
  }
  return v11;
}
