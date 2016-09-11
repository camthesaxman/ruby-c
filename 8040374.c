int __fastcall sub_8040374(int a1, int a2)
{
  unsigned int v2; // r1@1
  unsigned int v3; // r4@1
  unsigned int v4; // r5@1
  unsigned __int16 v5; // r0@1
  int result; // r0@2

  v2 = a2 << 24;
  v3 = v2 >> 24;
  v4 = v2 >> 24;
  v5 = GetMonData(a1, 65, 0);
  if ( v5 == 412 )
  {
    result = 0;
  }
  else if ( v3 <= 0x1F )
  {
    result = gTMHMLearnsets[2 * v5] & (1 << v4);
  }
  else
  {
    result = gTMHMLearnsets[2 * v5 + 1] & (1 << (v3 - 32));
  }
  return result;
}
