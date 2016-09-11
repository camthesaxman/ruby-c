int __fastcall sub_8090644(unsigned __int8 a1, unsigned __int16 a2)
{
  int v2; // r10@1
  int v3; // r9@1
  int v4; // r1@1
  signed __int16 v5; // r5@4
  unsigned int v6; // r3@6
  unsigned __int8 v7; // r12@6
  int v8; // r0@7
  unsigned int v9; // r3@9
  int v10; // r0@10
  int v12; // [sp+1Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    if ( v4 != v2 && v4 )
      v5 = 0x4000;
    else
      v5 = 0x2000;
    v6 = 0;
    v7 = v4 + 1;
    do
    {
      v8 = (v3 << 11) + 2 * (((5 * v4 + 1) & 0xFF) + v6);
      *(_WORD *)(v8 + 100663296) = *(_WORD *)(v8 + 100663296) & 0xFFF | v5;
      *(_WORD *)(v8 + 100663360) = *(_WORD *)(v8 + 100663360) & 0xFFF | v5;
      v6 = (v6 + 1) & 0xFF;
    }
    while ( v6 <= 4 );
    v4 = (unsigned __int8)(v4 + 1);
  }
  while ( v7 <= 3u );
  v9 = 0;
  do
  {
    v10 = (v3 << 11) + 2 * v9;
    *(_WORD *)(v10 + 100663346) = *(_WORD *)(v10 + 100663346) & 0xFFF | 0x4000;
    *(_WORD *)(v10 + 100663410) = *(_WORD *)(v10 + 100663410) & 0xFFF | 0x4000;
    v9 = (v9 + 1) & 0xFF;
  }
  while ( v9 <= 4 );
  return v12;
}
