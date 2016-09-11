int __fastcall sub_8052D10(int a1, int a2)
{
  signed int v2; // r2@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = 0;
  do
  {
    *(_BYTE *)(a1 + v2) = *(_BYTE *)(a2 + v2);
    ++v2;
  }
  while ( v2 <= 3 );
  return v4;
}
