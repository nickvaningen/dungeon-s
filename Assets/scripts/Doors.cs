using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Doors : MonoBehaviour {

    [SerializeField] private List<GameObject> doors = new List<GameObject>();
    private roomspawner _roomspawner;

    void Awake()
    {
        _roomspawner = GameObject.Find("Main Camera").GetComponent<roomspawner>();
        _roomspawner.check += this.checkneighbours;
    }

    private void checkneighbours()
    {
        if (_roomspawner.Rooms(((int)transform.position.x / _roomspawner.Roomsize()) + _roomspawner.Mapsize() + 1, ((int)transform.position.y / _roomspawner.Roomsize()) + _roomspawner.Mapsize()) == null)
        {//check right
            closedoors(doors[1]);
        }
        if (_roomspawner.Rooms(((int)transform.position.x / _roomspawner.Roomsize()) + _roomspawner.Mapsize() - 1, ((int)transform.position.y / _roomspawner.Roomsize()) + _roomspawner.Mapsize()) == null)
        {//check left
            closedoors(doors[3]);

        }
        if (_roomspawner.Rooms(((int)transform.position.x / _roomspawner.Roomsize()) + _roomspawner.Mapsize(), ((int)transform.position.y / _roomspawner.Roomsize()) + _roomspawner.Mapsize() + 1) == null)
        {//check up
            closedoors(doors[0]);
            
        }
        if (_roomspawner.Rooms(((int)transform.position.x / _roomspawner.Roomsize()) + _roomspawner.Mapsize(), ((int)transform.position.y / _roomspawner.Roomsize()) + _roomspawner.Mapsize() - 1) == null)
        {//check down
            closedoors(doors[2]);

        }
    }
    private void closedoors(GameObject door)
    {
        door.SetActive(true);
    }
}
