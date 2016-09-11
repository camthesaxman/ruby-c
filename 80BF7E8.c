int __fastcall sub_80BF7E8(int a1)
{
  int v1; // r3@1
  unsigned int v2; // r1@1
  int v3; // r2@2

  v1 = 0;
  v2 = 0;
  if ( *(_BYTE *)(a1 + 4) != 255 )
  {
    v3 = a1 + 4;
    do
    {
      v1 = (v1 + *(_BYTE *)(v3 + v2)) & 0xFFFF;
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v2 <= 0xA && *(_BYTE *)(v3 + v2) != 255 );
  }
  return v1 & 7;
}
