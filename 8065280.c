int __fastcall DrawMessageBox(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // r10@1
  unsigned int v6; // r5@1
  int v7; // r7@2
  int v8; // r4@3
  unsigned __int8 i; // r8@3
  int v11; // [sp+4h] [bp-38h]@1
  int v12; // [sp+8h] [bp-34h]@1
  int v13; // [sp+Ch] [bp-30h]@1
  int v14; // [sp+10h] [bp-2Ch]@1
  int v15; // [sp+14h] [bp-28h]@1
  int v16; // [sp+38h] [bp-4h]@0

  v11 = a1;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  v15 = ((*(_BYTE *)(a1 + 6) << 12) | (unsigned __int16)sMessageBoxBaseTileNum) & 0xFFFF;
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 44) + 20);
  v6 = 0;
  if ( a5 + 2 > 0 )
  {
    v7 = a4 + 6;
    do
    {
      v8 = 0;
      for ( i = v6 + 1; v8 < v7; v8 = (v8 + 1) & 0xFF )
        *(_WORD *)(2 * (32 * (v13 + v6) + v12 + v8) + v5) = (*(_BYTE *)(v11 + 6) << 12) | GetMessageBoxTilemapEntry(
                                                                                            v15,
                                                                                            v8,
                                                                                            v6,
                                                                                            v14,
                                                                                            a5);
      v6 = (unsigned __int8)(v6 + 1);
    }
    while ( i < a5 + 2 );
  }
  return v16;
}
