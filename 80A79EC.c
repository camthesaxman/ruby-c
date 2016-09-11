int __fastcall sub_80A79EC(int a1)
{
  int v1; // r4@1
  char v2; // r6@4
  __int16 v3; // r4@7
  __int16 v4; // r1@8
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = *(_WORD *)(a1 + 52);
  if ( *(_WORD *)(a1 + 52) )
  {
    if ( v1 == 1 )
    {
      v3 = *(_WORD *)(a1 + 46);
      if ( *(_WORD *)(a1 + 46) )
      {
        v4 = *(_WORD *)(a1 + 48);
        if ( *(_WORD *)(a1 + 48) )
        {
          ++*(_WORD *)(a1 + 34);
          *(_WORD *)(a1 + 46) = v3 - 1;
        }
        *(_WORD *)(a1 + 48) = ((_BYTE)v4 + 1) & 1;
      }
      else
      {
        v203855B = -1;
        *(_WORD *)(a1 + 48) = 0;
        *(_WORD *)(a1 + 52) = 0;
      }
    }
  }
  else
  {
    v2 = v203855B;
    if ( v203855B == 6 )
    {
      *(_BYTE *)(a1 + 63) |= 4u;
      *(_BYTE *)(a1 + 42) = v1;
      *(_WORD *)(a1 + 34) -= 4;
      *(_WORD *)(a1 + 46) = 4;
      *(_WORD *)(a1 + 52) = 1;
      sub_80A7AE4(a1);
    }
    else
    {
      *(_BYTE *)(a1 + 63) |= 4u;
      *(_BYTE *)(a1 + 42) = v2;
      v203855B = -1;
    }
  }
  return v6;
}
