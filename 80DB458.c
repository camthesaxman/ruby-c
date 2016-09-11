int __fastcall sub_80DB458(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@1
  unsigned int v3; // r1@1
  __int16 v4; // r0@2
  __int16 v5; // r0@5
  int v6; // r0@7
  unsigned __int8 *v7; // r4@10
  int v9; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = Random() & 0x1FF;
  v3 = Random() & 0x7F;
  if ( v2 & 1 )
    v4 = v2 + 736;
  else
    v4 = 736 - v2;
  *(_WORD *)(v1 + 46) = v4;
  if ( v3 & 1 )
    v5 = v3 + 896;
  else
    v5 = 896 - v3;
  *(_WORD *)(v1 + 48) = v5;
  v6 = (unsigned __int16)word_3004B00[0];
  *(_WORD *)(v1 + 50) = word_3004B00[0];
  if ( v6 << 16 )
    *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 0x10;
  if ( word_3004B02 )
    v7 = (unsigned __int8 *)33748937;
  else
    v7 = (unsigned __int8 *)33748936;
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(*v7, 0);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(*v7, 1u) + 32;
  *(_DWORD *)(v1 + 28) = sub_80DB508;
  return v9;
}
