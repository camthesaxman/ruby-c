int __fastcall sub_8092810(__int16 a1, unsigned __int8 a2, unsigned __int8 a3, int a4)
{
  int v4; // r12@1
  unsigned int v5; // r5@1
  int v6; // r3@1
  __int16 v7; // r4@2
  int v8; // r1@3
  unsigned int v9; // r0@3
  int v11; // [sp+10h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  v4 = a2;
  v5 = (a4 << 16) & 0xFFFFFF;
  v6 = 0;
  if ( v5 )
  {
    v7 = a1 << 12;
    do
    {
      v8 = (a3 << 6) + 2 * (v4 + v6);
      *(_WORD *)(v8 + 100694016) = *(_WORD *)(v8 + 100694016) & 0xFFF | v7;
      *(_WORD *)(v8 + 100694080) = *(_WORD *)(v8 + 100694080) & 0xFFF | v7;
      v9 = (v6 + 1) << 16;
      v6 = (v6 + 1) & 0xFFFF;
    }
    while ( v9 < v5 );
  }
  return v11;
}
