int __fastcall sub_80E1728(int a1)
{
  int v1; // r5@1
  _BYTE *v2; // r0@2
  int v3; // r4@4
  signed __int16 v4; // r6@4
  __int16 v5; // r0@6
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
    v2 = (_BYTE *)33748937;
  else
    v2 = (_BYTE *)33748936;
  v3 = *v2;
  v4 = 24;
  if ( word_3004B02 == 1 )
  {
    v4 = -24;
    word_3004B04 = -word_3004B04;
  }
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v3, 2u) + v4;
  v5 = (unsigned __int8)sub_8077FC0(v3) + 30;
  *(_WORD *)(v1 + 34) = v5;
  *(_WORD *)(v1 + 46) = word_3004B0A;
  *(_WORD *)(v1 + 50) = word_3004B04 + *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 54) = v5 + word_3004B06;
  *(_WORD *)(v1 + 56) = word_3004B08;
  sub_80786EC(v1);
  *(_DWORD *)(v1 + 28) = sub_80E17B0;
  return v7;
}
