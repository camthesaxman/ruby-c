signed int __fastcall sub_80421B0(unsigned int *a1)
{
  unsigned int *v1; // r7@1
  _BYTE *v2; // r2@1
  unsigned int v3; // r6@1
  unsigned int *v4; // r5@1
  unsigned int v5; // r0@2
  unsigned int v6; // r4@8
  unsigned __int8 v7; // r0@10
  unsigned int i; // r6@11
  int v9; // r0@13
  int v11; // [sp+0h] [bp-1Ch]@13
  _BYTE *v12; // [sp+4h] [bp-18h]@2

  v1 = a1;
  v2 = 0;
  v3 = 0;
  v4 = a1;
  do
  {
    v12 = v2;
    v5 = GetBoxMonData(v4, 5, v2);
    v2 = v12;
    if ( v5 )
    {
      ++v1[v3 + 68];
      ++v2;
    }
    v4 += 20;
    ++v3;
  }
  while ( v3 <= 1 );
  if ( !*((_WORD *)v1 + 140) && v2 == (_BYTE *)2 && *((_BYTE *)v1 + 276) == 255 )
  {
    v6 = (unsigned __int8)daycare_relationship_score(v1);
    if ( v6 > 100 * (unsigned int)(unsigned __int16)Random() / 0xFFFF )
      sub_8041940();
  }
  v7 = *((_BYTE *)v1 + 282) + 1;
  *((_BYTE *)v1 + 282) = v7;
  if ( v7 == 255 )
  {
    for ( i = 0; i < (unsigned __int8)byte_3004350; ++i )
    {
      if ( GetMonData((int)&unk_3004360 + 100 * i, 45, (int)v2) )
      {
        v9 = GetMonData((int)&unk_3004360 + 100 * i, 32, (int)v2);
        v11 = v9;
        if ( !v9 )
        {
          v202E8CC = i;
          return 1;
        }
        v11 = v9 - 1;
        SetMonData((int)&unk_3004360 + 100 * i, 32, (int)&v11);
      }
    }
  }
  return 0;
}
