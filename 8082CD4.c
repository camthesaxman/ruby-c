int __fastcall sub_8082CD4(unsigned __int8 a1, unsigned __int8 a2)
{
  __int16 v2; // r6@1
  __int16 v3; // r5@1
  int *v4; // r1@2
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( (unsigned __int8)FindTaskIdByFunc((int)sub_8082F20) == 255 )
  {
    v4 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_8082F20, 80)];
    *((_WORD *)v4 + 5) = v2;
    *((_WORD *)v4 + 6) = v3;
  }
  return v6;
}
