int __fastcall sub_81013B8(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  unsigned int v4; // r10@1
  unsigned int v5; // r9@1
  unsigned int v6; // r8@1
  unsigned int i; // r4@1
  unsigned int v8; // r0@2
  unsigned int v9; // r3@2
  unsigned int v10; // r2@2
  unsigned int v12; // [sp+0h] [bp-24h]@1
  int v13; // [sp+20h] [bp-4h]@0

  v12 = a1;
  v4 = a2;
  v5 = a3;
  v6 = a4;
  for ( i = 0; i < v201F008; i = (i + 1) & 0xFF )
  {
    v8 = *(_BYTE *)(v201F004 + i);
    v9 = v8 >> 4;
    v10 = v8 & 0xF;
    if ( *(_BYTE *)(v201F000 + i)
      && *((_BYTE *)&gDecorations + 32 * *(_BYTE *)(v201F000 + i) + 17) == 4
      && v12 <= v9
      && v4 <= v10
      && v5 >= v9
      && v6 >= v10 )
    {
      *(_BYTE *)(8 * v2039234 + 0x20391B4) = i;
      sub_81012A0();
      ++v2039234;
    }
  }
  return v13;
}
