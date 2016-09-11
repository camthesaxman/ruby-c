int __fastcall incense_effects(_WORD *a1, int a2, _BYTE *a3)
{
  _WORD *v3; // r4@1
  int v4; // r5@1
  int v5; // r1@1
  int v6; // r6@3
  _BYTE *v7; // r2@3
  int v8; // r2@3
  int v10; // [sp+10h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = *a1;
  if ( v5 == 360 || v5 == 350 )
  {
    v6 = (unsigned __int16)GetBoxMonData((unsigned int *)v4, 12, a3);
    v8 = (unsigned __int16)GetBoxMonData((unsigned int *)(v4 + 80), 12, v7);
    if ( *v3 == 360 && v6 != 221 && v8 != 221 )
      *v3 = 202;
    if ( *v3 == 350 && v6 != 220 && v8 != 220 )
      *v3 = 183;
  }
  return v10;
}
