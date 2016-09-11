int __fastcall sub_804AADC(__int16 a1, char a2)
{
  int v2; // r3@1
  int v3; // r2@2
  int v5; // [sp+10h] [bp-4h]@0

  v2 = 0;
  while ( 1 )
  {
    v3 = dword_3004824 + 8 * v2;
    if ( !*(_BYTE *)(v3 + 2268) )
      break;
    if ( ++v2 > 3 )
      return v5;
  }
  *(_WORD *)(v3 + 2270) = a1;
  *(_BYTE *)(v3 + 2272) = a2;
  *(_BYTE *)(dword_3004824 + 8 * v2 + 2268) = 1;
  return v5;
}
