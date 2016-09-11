int __fastcall RtcCheckInfo(int a1)
{
  int v1; // r7@1
  int v2; // r4@1
  int v3; // r0@3
  unsigned __int8 v4; // r8@3
  int v5; // r0@5
  int v6; // r6@5
  int v7; // r5@9
  int v8; // r0@12

  v1 = a1;
  v2 = (-(*(_BYTE *)(a1 + 7) & 0x80) >> 31) & 0x20;
  if ( !(*(_BYTE *)(a1 + 7) & 0x40) )
    v2 |= 0x10u;
  v3 = ConvertBcdToBinary(*(_BYTE *)a1);
  v4 = v3;
  if ( v3 == 255 )
    v2 = (v2 | 0x40) & 0xFFFF;
  v5 = ConvertBcdToBinary(*(_BYTE *)(v1 + 1));
  v6 = v5;
  if ( v5 == 255 || !v5 || v5 > 12 )
    v2 = (v2 | 0x80) & 0xFFFF;
  v7 = ConvertBcdToBinary(*(_BYTE *)(v1 + 2));
  if ( v7 == 255 )
    v2 = (v2 | 0x100) & 0xFFFF;
  if ( v6 == 2 )
    v8 = (unsigned __int8)IsLeapYear(v4) + 28;
  else
    v8 = *(&sNumDaysInMonths + v6 - 1);
  if ( v7 > v8 )
    v2 = (v2 | 0x100) & 0xFFFF;
  if ( ConvertBcdToBinary(*(_BYTE *)(v1 + 4)) > 24 )
    v2 = (v2 | 0x200) & 0xFFFF;
  if ( ConvertBcdToBinary(*(_BYTE *)(v1 + 5)) > 60 )
    v2 = (v2 | 0x400) & 0xFFFF;
  if ( ConvertBcdToBinary(*(_BYTE *)(v1 + 6)) > 60 )
    v2 = (v2 | 0x800) & 0xFFFF;
  return v2;
}
