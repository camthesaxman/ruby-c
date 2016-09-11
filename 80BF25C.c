int __fastcall sub_80BF25C(unsigned __int8 a1)
{
  unsigned int v1; // r1@1
  int v2; // r0@5
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = 0;
  while ( *(_BYTE *)(36 * v1 + 0x2027E6C) != a1 )
  {
    v1 = (v1 + 1) & 0xFF;
    if ( v1 > 4 )
    {
      ((void (*)(void))sub_80BF6D8)();
      return v4;
    }
  }
  if ( *(_BYTE *)(36 * v1 + 0x2027E6D) == 1 )
  {
    v202E8DC = 1;
  }
  else
  {
    sub_80BF55C(33717868, v1);
    v2 = sub_80BF588(33717868);
    sub_80BF6D8(v2);
  }
  return v4;
}
