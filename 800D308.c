int __fastcall DecompressPicFromTable_2(_DWORD *a1, int a2, int a3, int a4, int a5, signed int a6)
{
  int v7; // [sp+0h] [bp-4h]@0

  if ( a6 <= 412 )
    LZ77UnCompWram(*a1, a5);
  else
    LZ77UnCompWram(147854628, a5);
  return v7;
}
