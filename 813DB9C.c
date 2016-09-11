int __fastcall sub_813DB9C(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  _BYTE *v3; // r2@4
  char v4; // r0@4
  __int16 v5; // r2@19
  signed int v6; // r0@21
  int v7; // r3@23
  __int16 v8; // r0@24
  int v10; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 > 4 )
  {
def_813DBB2:
    if ( *(_WORD *)(v1 + 50) )
    {
      v3 = (_BYTE *)(v1 + 63);
      v4 = *(_BYTE *)(v1 + 63) | 1;
    }
    else
    {
      v3 = (_BYTE *)(v1 + 63);
      v4 = *(_BYTE *)(v1 + 63) & 0xFE;
    }
    *v3 = v4;
    *(_WORD *)(v1 + 46) = 1;
_0813DBF2:
    if ( (signed int)*(_WORD *)(v1 + 34) <= 96 )
    {
      ++*(_WORD *)(v1 + 46);
      *(_WORD *)(v1 + 52) = 8;
    }
    else
    {
      *(_WORD *)(v1 + 34) -= 4;
      if ( *(_WORD *)(v1 + 50) )
        *(_WORD *)(v1 + 32) += 2;
      else
        *(_WORD *)(v1 + 32) -= 2;
    }
  }
  else
  {
    switch ( v2 )
    {
      default:
        goto def_813DBB2;
      case 1u:
        goto _0813DBF2;
      case 2u:
        if ( *(_WORD *)(v1 + 52) )
        {
          --*(_WORD *)(v1 + 52);
        }
        else
        {
          ++*(_WORD *)(v1 + 46);
          *(_WORD *)(v1 + 52) = 0;
        }
        break;
      case 3u:
        *(_BYTE *)(v1 + 1) |= 3u;
        *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 2 * (*(_WORD *)(v1 + 48) & 0x1F);
        CalcCenterToCornerVec(v1, 0, 3, 3);
        if ( *(_WORD *)(v1 + 50) )
          SetOamMatrix(*(_WORD *)(v1 + 48) & 0xFF, -256, 0, 0, 256);
        else
          SetOamMatrix(*(_WORD *)(v1 + 48) & 0xFF, 256, 0, 0, 256);
        ++*(_WORD *)(v1 + 46);
        *(_WORD *)(v1 + 54) = 0;
        break;
      case 4u:
        v5 = *(_WORD *)(v1 + 54) + 1;
        *(_WORD *)(v1 + 54) = v5;
        if ( *(_WORD *)(v1 + 34) + (signed int)*(_WORD *)(v1 + 38) <= -32
          || *(_WORD *)(v1 + 32) + (signed int)*(_WORD *)(v1 + 36) <= -64 )
        {
          DestroySprite(v1);
        }
        else
        {
          v6 = -(*(_WORD *)(v1 + 54) * *(_WORD *)(v1 + 54));
          if ( *(_WORD *)(v1 + 54) * (signed int)*(_WORD *)(v1 + 54) > 0 )
            v6 = 7 - *(_WORD *)(v1 + 54) * *(_WORD *)(v1 + 54);
          *(_WORD *)(v1 + 38) = v6 >> 3;
          v7 = *(_WORD *)(v1 + 50);
          if ( *(_WORD *)(v1 + 50) )
            v8 = *(_WORD *)(v1 + 36) + v5;
          else
            v8 = *(_WORD *)(v1 + 36) - v5;
          *(_WORD *)(v1 + 36) = v8;
          if ( (signed int)*(_WORD *)(v1 + 52) <= 127 )
            *(_WORD *)(v1 + 52) += 8;
          if ( v7 << 16 )
            SetOamMatrix(
              *(_WORD *)(v1 + 48) & 0xFF,
              -(signed __int16)(256 - *(_WORD *)(v1 + 52)),
              0,
              0,
              256 - *(_WORD *)(v1 + 52));
          else
            SetOamMatrix(*(_WORD *)(v1 + 48) & 0xFF, 256 - *(_WORD *)(v1 + 52), 0, 0, 256 - *(_WORD *)(v1 + 52));
        }
        break;
    }
  }
  return v10;
}
