char *__fastcall sub_80F3A3C(int a1, unsigned __int16 a2)
{
  int v2; // r4@1
  int v3; // r1@2
  int *v4; // r2@2
  int v5; // r2@4
  unsigned __int8 v6; // r0@4
  char *result; // r0@5
  int v8; // [sp+0h] [bp-2Ch]@4
  signed int v9; // [sp+4h] [bp-28h]@4
  signed int v10; // [sp+8h] [bp-24h]@4
  int v11; // [sp+Ch] [bp-20h]@4
  signed int v12; // [sp+10h] [bp-1Ch]@4
  signed int v13; // [sp+14h] [bp-18h]@4

  v2 = a2;
  if ( a2 > 2u )
  {
    v4 = &gUnknown_083DFEC4;
    v3 = ((unsigned __int16)a1 + v200BC8E - v200BC8F) & 0xFFFF;
  }
  else
  {
    v3 = ((unsigned __int16)a1 + 9 * a2) & 0xFFFF;
    v4 = &gUnknown_083DFEC4;
  }
  v5 = *(_BYTE *)(*v4 + 48204 + v3);
  v8 = 655371;
  v9 = 138299160;
  v10 = 136194308;
  v11 = 0;
  v12 = 138299232;
  v13 = 134222353;
  v5 *= 4;
  LOWORD(v8) = *(_WORD *)((char *)&gUnknown_083E4698 + v5) + 11;
  HIWORD(v8) = *(_WORD *)&byte_83E469A[v5] + 10;
  v6 = CreateSprite((int)&v8, (unsigned int)((a1 << 20) + 6291456) >> 16, (unsigned int)((v2 << 20) + 2621440) >> 16);
  if ( v6 == 64 )
    result = 0;
  else
    result = &gSprites[68 * v6];
  return result;
}
