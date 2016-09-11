signed int __fastcall show_sprite(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // r7@1
  unsigned __int8 v4; // r6@1
  int v5; // r5@1
  signed int result; // r0@2
  char v7; // [sp+4h] [bp-18h]@2
  __int16 v8; // [sp+6h] [bp-16h]@2

  v3 = a2;
  v4 = a3;
  v5 = GetFieldObjectTemplateByLocalIdAndMap(a1, a2, a3);
  if ( v5 )
  {
    GetFieldObjectMovingCameraOffset(&v7, &v8);
    result = (unsigned __int8)SpawnFieldObject(v5, v3, v4, *(__int16 *)&v7, v8);
  }
  else
  {
    result = 16;
  }
  return result;
}
