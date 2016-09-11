int __fastcall sub_81280A0(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r2@1
  unsigned __int16 v6; // r1@2
  __int16 v7; // r0@8
  int v9; // [sp+0h] [bp-10h]@1
  int v10; // [sp+Ch] [bp-4h]@11

  v3 = a2;
  v4 = a3;
  memcpy(&v9, (const char *)&gUnknown_08401E5A, 4);
  v5 = (unsigned __int8)sub_8127F5C(v4);
  if ( v5 )
  {
    v6 = *(_WORD *)(v4 + 54) + 1;
    *(_WORD *)(v4 + 54) = v6;
    if ( !(v6 & *((_WORD *)&v9 + *(_WORD *)(v4 + 56))) )
      *(_WORD *)(v4 + 38) += *(_WORD *)(v4 + 52);
    if ( !(*(_WORD *)(v4 + 54) & 0xF) )
      *(_WORD *)(v4 + 52) = -*(_WORD *)(v4 + 52);
    if ( v5 != 2 )
    {
      if ( sub_8127F70(v4) << 24 )
        v7 = *(_WORD *)(v4 + 38) + *(_WORD *)(v4 + 48);
      else
        v7 = *(_WORD *)(v4 + 38);
      *(_WORD *)(v3 + 38) = v7;
      *(_WORD *)(v4 + 32) = *(_WORD *)(v3 + 32);
      *(_WORD *)(v4 + 34) = *(_WORD *)(v3 + 34) + 8;
    }
  }
  return v10;
}
