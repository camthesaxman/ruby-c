int __fastcall sub_808BC60(char *a1, char a2, unsigned __int8 a3, char a4)
{
  char *v4; // r4@1
  char v5; // r6@1
  __int16 v6; // r5@1
  unsigned int v7; // r2@1
  char v8; // r1@1
  int v10; // [sp+0h] [bp-24h]@2
  int v11; // [sp+20h] [bp-4h]@4

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = 0;
  v8 = *a1;
  if ( (unsigned __int8)*a1 != 255 )
  {
    do
    {
      *((_BYTE *)&v10 + v7) = v8;
      ++v4;
      v7 = (v7 + 1) & 0xFFFF;
      v8 = *v4;
    }
    while ( (unsigned __int8)*v4 != 255 && v7 <= 0xE );
  }
  BYTE2(v10) = a4;
  *((_BYTE *)&v10 + v7) = -1;
  sub_80729D8((int)&v10, v5, v6, 1u);
  return v11;
}
