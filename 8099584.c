int __fastcall sub_8099584(char a1, int a2)
{
  int *v2; // r3@2
  int v3; // r1@2
  int v4; // r2@5
  int v6; // [sp+8h] [bp-4h]@0

  a2 = (unsigned __int8)a2;
  if ( !a1 )
  {
    v2 = &gUnknown_083B6DB4;
    v3 = 4 * a2;
    v2001034 = *(_DWORD *)(v3 + 33558584);
    *(_DWORD *)(v3 + 33558584) = 0;
_080995D0:
    v4 = *v2 + 4148;
    *(_DWORD *)(*(_DWORD *)v4 + 28) = sub_80999C4;
    *(_BYTE *)(*(_DWORD *)v4 + 5) = *(_BYTE *)(*(_DWORD *)v4 + 5) & 0xF3 | 4;
    *(_BYTE *)(*(_DWORD *)v4 + 67) = 7;
    return v6;
  }
  if ( a1 == 1 )
  {
    v2 = &gUnknown_083B6DB4;
    v2001034 = *(_DWORD *)(4 * a2 + 0x2001050);
    *(_DWORD *)(4 * a2 + 0x2001050) = 0;
    goto _080995D0;
  }
  return v6;
}
