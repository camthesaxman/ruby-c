signed int __fastcall sub_8058790(int a1, int a2)
{
  signed int result; // r0@2

  if ( cur_mapdata_get_door_x2_at((int)&gDoorAnimGraphicsTable, a1, a2) << 24 )
    result = 18;
  else
    result = 8;
  return result;
}
