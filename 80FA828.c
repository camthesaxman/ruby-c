signed int __fastcall sub_80FA828(int a1, unsigned __int16 a2)
{
  int v2; // r7@1
  int v3; // r5@1
  signed int v4; // r6@1
  unsigned int v5; // r4@1
  signed int result; // r0@3
  int v7; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = 33585408;
  v5 = 0;
  if ( (signed int)a2 <= 0 )
  {
_080FA862:
    result = -1;
  }
  else
  {
    while ( !(sub_80FA7FC((_WORD *)(v2 + 4), (_WORD *)(v4 + 4)) << 24) )
    {
      v4 += 8;
      v7 = (v5 << 16) + 0x10000;
      v5 = (unsigned int)v7 >> 16;
      if ( v7 >> 16 >= v3 )
        goto _080FA862;
    }
    result = (signed __int16)v5;
  }
  return result;
}
