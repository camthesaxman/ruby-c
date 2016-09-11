int __fastcall sub_8064D38(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r5@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v2 + 4) && (unsigned __int8)walkrun_is_standing_still() == 1 )
  {
    sub_80594C0();
    *((_WORD *)v2 + 4) = 1;
  }
  if ( !*((_WORD *)v2 + 5) && !(dword_30048A0[9 * (unsigned __int8)byte_3004AE0] & 2) )
  {
    sub_80643A4((int)&dword_30048A0[9 * (unsigned __int8)byte_3004AE0]);
    *((_WORD *)v2 + 5) = 1;
  }
  if ( *((_WORD *)v2 + 4) && *((_WORD *)v2 + 5) )
    DestroyTask(v1);
  return v4;
}
