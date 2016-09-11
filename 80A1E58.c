int __fastcall sub_80A1E58(int a1, int a2)
{
  int v2; // r2@1
  char *v3; // r3@2
  int i; // r0@2

  v2 = a1;
  a2 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 != 255 )
  {
    v3 = &gUnknown_083C15BC;
    for ( i = (unsigned __int8)gUnknown_083C15BC; i != 255 && i != a2; i = (unsigned __int8)*v3 )
      v3 += 4;
    *(_BYTE *)v2 = -4;
    *(_BYTE *)(v2 + 1) = 4;
    *(_BYTE *)(v2 + 2) = v3[1];
    *(_BYTE *)(v2 + 3) = v3[2];
    *(_BYTE *)(v2 + 4) = v3[3];
    v2 += 5;
  }
  return v2;
}
