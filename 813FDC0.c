int __fastcall sub_813FDC0(int a1)
{
  int v1; // r4@1
  _WORD *v2; // r0@4
  signed int v3; // r5@6
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( sub_8078718(a1) << 24 )
  {
    if ( v2017848 == 5 )
    {
      *(_DWORD *)(v1 + 28) = sub_81407B8;
    }
    else
    {
      StartSpriteAnim(v1, 1);
      *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 36);
      *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
      *(_WORD *)(v1 + 36) = 0;
      *(_WORD *)(v1 + 38) = 0;
      v2 = (_WORD *)(v1 + 60);
      do
      {
        *v2 = 0;
        --v2;
      }
      while ( (signed int)v2 >= v1 + 46 );
      *(_WORD *)(v1 + 56) = 0;
      *(_DWORD *)(v1 + 28) = sub_813FE70;
      v3 = (unsigned __int8)ball_number_to_ball_processing_index(v2024C04);
      if ( v3 <= 11 && v3 >= 0 )
      {
        sub_814086C(*(_WORD *)(v1 + 32) & 0xFF, (*(_WORD *)(v1 + 34) - 5) & 0xFF, 1, 28);
        sub_8141314(0, v202F7C9, 14, v3);
      }
    }
  }
  return v5;
}
