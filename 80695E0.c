int __fastcall sub_80695E0(int a1, int a2)
{
  int v2; // r5@1
  unsigned int v3; // r1@1
  unsigned int v4; // r4@1
  int result; // r0@2

  v2 = a1;
  v3 = a2 << 24;
  v4 = v3 >> 24;
  if ( sub_80576A0(SBYTE3(v3)) << 24 )
  {
    result = v2;
  }
  else if ( sub_80576B4(v4) << 24 )
  {
    result = v2 + 8;
  }
  else if ( sub_80576C8(v4) << 24 )
  {
    result = v2 + 16;
  }
  else if ( sub_80576DC(v4) << 24 )
  {
    result = v2 + 24;
  }
  else
  {
    result = 0;
  }
  return result;
}
