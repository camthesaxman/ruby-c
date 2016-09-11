int __fastcall sub_810E7AC(char a1, char a2, char a3, char a4)
{
  char v4; // r7@1
  unsigned int v5; // r1@2
  int v7; // [sp+14h] [bp-4h]@0

  v4 = a2;
  if ( !v202E8CC )
  {
    v5 = 0;
    do
    {
      byte_3000760[4 * v5] = 16;
      v5 = (v5 + 1) & 0xFF;
    }
    while ( v5 <= 0x13 );
  }
  byte_3000760[4 * v202E8CC] = a1;
  byte_3000760[4 * v202E8CC + 1] = v4;
  byte_3000760[4 * v202E8CC + 2] = a3;
  byte_3000760[4 * v202E8CC + 3] = a4;
  ++v202E8CC;
  return v7;
}
