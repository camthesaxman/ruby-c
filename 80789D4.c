int __fastcall sub_80789D4(int a1)
{
  int v1; // r0@2
  int v3; // [sp+0h] [bp-4h]@0

  if ( a1 << 24 )
  {
    if ( sub_8076BE0() << 24 )
    {
      v400000F &= 0x3Fu;
      LOBYTE(v1) = v400000F | 0x20;
    }
    else
    {
      v400000F = v400000F & 0x3F | 0x40;
      LOBYTE(v1) = v400000F & 0xDF;
    }
  }
  else
  {
    v400000F &= 0x3Fu;
    v1 = v400000F | 0x20;
  }
  v400000F = v1;
  return v3;
}
